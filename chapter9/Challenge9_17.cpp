// Tui Popenoe
// Challenge 9.17

#include <iostream>

using namespace std;

int main(){

    char cont = 'y';
    float firstOperand;
    float secondOperand;
    float total = 0;
    char op;

    while(cont == 'y'){
        cout << "Enter first operand: ";
        cin >> firstOperand;
        cout << "Enter second operand: ";
        cin >> secondOperand;
        cout << "Enter operator (+ or - or * or /): ";
        cin >> op;

        switch(op){
            case '+':
                total = firstOperand + secondOperand;
                break;
            case '-':
                total = firstOperand - secondOperand;
                break;
            case '*':
                total = firstOperand * secondOperand;
                break;
            case '/':
                if(secondOperand != 0){
                    total = firstOperand / secondOperand;
                }
                else{
                    cout << "Invalid operator";
                }
                break;
            default:
                break;
        }

        cout << "Product is: " << total << endl;

        cout << "Would you like to enter another set of values (y/n)?: " <<
            endl;
        cin >> cont;
    }

    return 0;
}