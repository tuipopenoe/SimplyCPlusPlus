// Tui Popenoe
// Challenge 12.16

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int askQuestion(int op1, int op2);

int main(){

    srand(time(0));
    int operand1;
    int operand2;
    int answer;
    int input;
    int response;
    bool cont = true;
    bool correct = false;

    while(cont){
        answer = askQuestion(operand1, operand2);
        while(!correct){
            cin >> input;
            if(input == -1){
                cont = false;
                break;
            }
            if(input == answer){
                response = 1 + rand() % 3;
                correct = true;
            }
            else{
                response = 4;
                correct = false;
            }

            if(response == 1){
                cout << "Excellent!" << endl << endl;
            }
            else if(response == 2){
                cout << "Very Good!" << endl << endl;
            }
            else if(response == 3){
                cout << "Great Job!" << endl << endl;
            }
            else{
                cout << "No. Please try again (-1 to end): ";
            }
        }
        correct = false;
    }

    return 0;
}

int askQuestion(int op1, int op2){
    op1 = 1 + rand() % 9;
    op2 = 1 + rand() % 9;
    cout << "How much is " << op1 << " times " << op2 << " (-1 to end)? ";
    return op1 * op2;
}

