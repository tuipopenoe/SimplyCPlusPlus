// Tui Popenoe
// Challenge 10.17

#include <iostream>
#include <cmath>

using namespace std;

void generatePrimes(int lbound, int ubound);
bool isPrime(int num);

int main(){

    int lbound;
    int ubound;

    cout << "Enter lower bound: ";
    cin >> lbound;
    cout << "Enter upper bound: ";
    cin >> ubound;
    cout << endl;
    generatePrimes(lbound, ubound);

    return 0;
}

void generatePrimes(int lbound, int ubound){
    for(int i = lbound; i <= ubound; i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
}

bool isPrime(int num){
    float root = sqrt(num);
    if(num < 2){
        return false;
    }
    if(num % 2 == 0){
        return false;
    }
    for(int i = 3; i <= root; i++){
        if((num % i) == 0){
            return false;
        }
    }

    return true;
}