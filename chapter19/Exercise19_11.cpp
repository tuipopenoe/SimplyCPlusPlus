// Tui Popenoe
// Exercise 19.11

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

void displayMenu(string &);
double getRate();
double getPrice(string &, string &, double);

int main(){
    string searchText;
    double rate = 0.0;

    // Assign HTML code to htmlText
    string htmlText =   "<html><body><table>"
                        "<tr><td>Antique Rocking Chari</td"
                        "<td>&euro;82.67</td></tr>"
                        "<tr><td>Silver Teapot</td>"
                        "<td>&euro;64.55</td></tr>"
                        "<tr><td>Gold Pocket Watch</td>"
                        "<td>&euro;128.83</td></tr>"
                        "</table></body></html";
    cout << "\nThe HTML source is: \n" << htmlText << endl;

    displayMenu(searchText);

    while(!searchText.empty()){
        rate = getRate();

        double price = getPrice(htmlText, searchText, rate);

        cout << fixed << setprecision(2);
        cout << "\nPrice is: $" << price << endl;

        displayMenu(searchText);
    }

    return 0;
}

void displayMenu(string &searchText){
    int selection = 0;

    while(selection < 1 || selection > 4){
        cout << "\nWhich item would you like to search for?\n";
        cout << "1 - Antique Rocking Chair" << endl;
        cout << "2 - Silver Teapot" << endl;
        cout << "3 - Gold Pocket Watch" << endl;
        cout << "4 - Exit the application" << endl;
        cout << "Enter selection: ";
        cin >> selection;

        switch(selection){
            case 1:
                searchText = "Antique Rocking Chair";
                break;
            case 2:
                searchText = "Silver Teapot";
                break;
            case 3:
                searchText = "Gold Pocket Watch";
                break;
            case 4:
                searchText = "";
                cout << endl;
                break;
            default:
                searchText = "";
                cout << "Error: Please enter a valid selection: " << endl;
        }
    }
}

double getRate(){
    double rate;
    string response;
    int index = 0;

    cout << "Enter conversion rate: ";
    cin >> response;

    index = response.find_first_not_of("0123456789.");

    while(index != string::npos){
        response = response.substr(0, index -1) +
            response.substr(index, response.length()-1);

        index = response.find_first_not_of("0123456789.");
    }

    rate = atof(response.c_str());

    return rate;
}

double getPrice(string &htmlText, string &searchText, double conversionRate){
    int itemLocation = htmlText.find(searchText);
    int priceBegin = htmlText.find("&euro;", itemLocation) + 6;
    int priceEnd = htmlText.find("</td>", priceBegin);

    string priceText = htmlText.substr(priceBegin, priceEnd-priceBegin);

    double price = atof(priceText.c_str());

    return price * conversionRate;
}

