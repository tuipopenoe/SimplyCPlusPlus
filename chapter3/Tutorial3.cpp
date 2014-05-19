// Tui Popenoe
// Tutorial 3

#include <iostream>

using namespace std;

int main(){
    int cartons;
    int items;
    int result;

    cout << "Enter the number of cartons in shipment: ";
    cin >> cartons;
    cout << "Enter the number of items per carton: ";
    cin >> items;

    result = items * cartons;

    cout << "The total number of items is: " << result;
}