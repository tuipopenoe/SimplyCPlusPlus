// Tui Popenoe
// Exercise 5.12

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    string patientName;
    char selection;
    char cleaning;
    char cavity;
    char xray;
    char fluoride;
    char rootCanal;
    char other;

    float otherCost = 0;
    float total = 0;


    cout << "Enter patient name: ";
    cin >> patientName;
    if(patientName.size() == 0){
        cout << "Error: enter a patient name";
    }
    else{
        cout << "Was a cleaning performed?";
        cin >> cleaning;
        cout << "Was a cavity filling performed?";
        cin >> cavity;
        cout << "Was an x-ray performed?";
        cin >> x-ray;
        cout << "Was a fluorida treament performed?";
        cin >> fluoride;
        cout << "Was a root canal performed?";
        cin >> rootCanal;
        cout << "Was any other service performed?";
        cin >> other;
        if(cleaning == null || cavity == null || xray == null || fluoride ==
            null || rootCanal == null){
            cout << "Error: incorrect selection";
        }
        else{
            if(cleaning == 'Y' || cleaning == 'y'){
                total += 35;
            }
            if(cavity == 'Y' || cavity == 'y'){
                total += 150;
            }
            if(cavity == 'Y' || cavity == 'y'){
                total += 85;
            }
            if(fluoride == 'Y' || fluoride == 'y'){
                total +=
            }
            if(rootCanal == 'Y' || rootCanal == 'y'){
                total +=
            }
            if(other == 'Y' || other == 'y'){
                cout << "Enter the cost for this service: ";
                cin >> otherCost;
                total += otherCost;
            }
        }
    }

    cout << fixed << setprecision(2) << "\nTotal: $" << total;

    return 0;
}