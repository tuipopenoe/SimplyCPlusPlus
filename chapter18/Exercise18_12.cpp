// Tui Popenoe
// Exercise 18.12

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>


using namespace std;

string decryptData(string, string);

int main(){
    string fileName;
    string outputFile;
    string output;
    string data;

    cout << "\nEnter encrypted file name: ";
    getline(cin, fileName);

    cout << "\nEnter output file name: ";
    getline(cin, outputFile);

    ifstream input(fileName.c_str(), ios::app);

    if(!input){
        cout << "Error: File could not be opened." << endl;
        exit(1);
    }

    ofstream out(outputFile.c_str(), ios::app);

    if(!out){
        cout << "Error: No output file." << endl;
        exit(1);
    }

    while(!input.eof()){
        getline(input, data);
        output = decryptData(data, output);
    }

    cout << "Data decrypted successfully!" << endl;
}

string decryptData(string data, string output){
    char currentChar;
    for(int i = 0; i < data.size(); i++){
        currentChar = data[i];
        currentChar += 15;
        output += currentChar;
    }
}