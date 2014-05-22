// Tui Popenoe
// Exercise 11.11

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calculateVolume(float radius);

int main(){
    float volume;
    float radius;

    cout << "Enter radius: ";
    cin >> radius;
    volume = calculateVolume(radius);
    cout << "Sphere volume is: " << fixed << setprecision(2) << volume;
    return 0;
}

float calculateVolume(float radius){
    return (4.0 / 3.0) * 3.14159 * pow(radius, 3);
}