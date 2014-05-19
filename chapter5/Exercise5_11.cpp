// Tui Popenoe
// Exercise 5.11

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
        if(cleaning == null || cavity == null || xray == null){
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
        }
    }

    cout << fixed << setprecision(2) << "\nTotal: $" << total;


    return 0;
}