// Tui Popenoe
// Exercise 10.11

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

float convertToFarenheit(float degrees);
float convertToCelsius(float degrees);

int main(){

    float temp;
    float conv;
    char type;
    string input;
    string strtemp;
    stringstream ss;

    cout << "Enter temperature to convert: ";
    getline(cin, input);
    strtemp = input.substr(0, 4);
    ss << strtemp;
    ss >> temp;
    type = input.at(4);

    cout << "Converted temperature is ";
    if(type == 'F'){
        cout << fixed << setprecision(2) << convertToCelsius(temp) <<
            " degrees Celsius" << endl;
    }
    else{
        cout << fixed << setprecision(2) << convertToFarenheit(temp) <<
            " degrees Farenheit" << endl;
    }
    return 0;
}

float convertToCelsius(float degrees){
    return (5.0 / 9.0) * (degrees - 32.0);
}

float convertToFarenheit(float degrees){
    return (9.0 / 5.0) * (degrees + 32.0);
}