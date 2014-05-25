// Tui Popenoe
// Challenge 13.16

#include <iostream>
#include <iomanip>

using namespace std;

int collectResponse(int);

void printResults(int[], int);

int main(){

    int ratings[10] = {0};
    int size = sizeof(ratings)/sizeof(ratings[0]);
    int rating;

    for(int i = 0; i < 10; i++){
        rating = collectResponse(rating);
        ratings[rating]++;
    }

    printResults(ratings, size);

    return 0;
}

int collectResponse(int rating){
    cout << "Enter survey response (1-5): ";
    cin >> rating;
    return rating;
}

void printResults(int ratings[], int size){
    cout << left << setw(10) << "Rating:" << "Frequency:" << endl;
    float total = 0;
    float mean = 0;
    float median = (ratings[4] + ratings[5]) /2;
    int mode = 0;
    for(int i = 0; i < size; i++){
        total += i * ratings[i];
    }
    for(int i = 0; i < size; i++){
        if(ratings[i] > mode){
            mode = i;
        }
    }
    int temp;
    for(int i = 0; i < size; i++){
        if(ratings[i] > 0){
            temp += ratings[i];
            if(temp >=5 ){
                median = i;
                break;
            }
        }
    }


    cout << "Mean: " << total / size << endl;
    cout << "Median: " << median << endl;
    cout << "Mode: " << mode << endl;
}
