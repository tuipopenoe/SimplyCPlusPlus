// Tui Popenoe
// Tutorial 13

#include <iostream>
#include <iomanip>

using namespace std;

void displayTotals(int []);

int main(){

    double sales = 0;
    int resultArray[11] = { 0 };

    cout << "\nEnter sales (-1 to end): ";
    cin >> sales;
    cout << fixed << setprecision( 2 );

    while( sales >= 0){
        double salary = 200 + 0.09 * sales;
        int index = static_cast< int > (salary / 100);

        if(index >= 10){
            resultArray[10]++;
        }
        else{
            resultArray[index]++;
        }

        cout << "Total salary: $" << salary << endl;

        cout << "\nEnter sales (-1 to end): ";
        cin >> sales;
    }

    displayTotals(resultArray);

    return 0;
}

void displayTotals(int printArray[]){
    int lowerBound;
    int upperBound;

    cout << "\nSalary Range:\tTotal:" << endl;

    for(int i = 2; i <= 9; i++){
        lowerBound = i * 100;
        upperBound = lowerBound + 99;

        cout << "$" << lowerBound << "-" << upperBound << "\t" <<
            printArray[i] << endl;
    }

    cout << "$1000+\t\t" << printArray[10] << endl << endl;
}