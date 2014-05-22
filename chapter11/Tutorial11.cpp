// Tui Popenoe
// Tutorial 12

#include <iostream>
#include <iomanip>

using namespace std;

float collectDonation(float amount, float total);

int main(){

    float amount;
    float total;
    float temp;

    bool cont = true;
    while(cont){
        temp = collectDonation(amount, total);
        if(temp == 0){
            cont = false;
            break;
        }
        else{
            total += temp;
        }
    }

    return 0;
}

float collectDonation(float amount, float total){
    cout << "Enter donation amount ( 0 or less to exit):";
    cin >> amount;
    if(amount <= 0){
        return 0;
    }
    else{
        amount *= (0.83);
        total += amount;
        cout << "After expenses: $" << fixed << setprecision(2) << amount <<
            endl;
        cout << "Total raised:   $" << total << endl;
        return amount;
    }
}