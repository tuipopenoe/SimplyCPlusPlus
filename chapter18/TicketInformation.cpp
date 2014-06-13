// Tui Popenoe
// TicketInformation.cpp

using namespace std;

int getDate();
void displayEvent(int);

int main(){
    int date;

    date = getDate();

    while(date != 0){
        displayEvent(date);
        date = getDate();
    }

    cout << "\n"
}