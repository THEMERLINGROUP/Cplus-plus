#include <iostream>
using namespace std;
int main() {
    double bet;
    int transactions = 0;
    int numberOfBets = 0;
    int win = 298;
    int pickNumber = 0;
    cout << "Enter bet in BTC" << endl;
    cin >> bet;
   
    while(bet != -1) {
        transactions = transactions + bet;
        numberOfBets++;

        cout << "Enter next bet or -1 to opt out" << endl;
        cin >> bet;
    }
    while(true){
        cin>>pickNumber;
        if(pickNumber == win) {
            cout << "You Win" <<endl;
            break;
        }
        else {
            cout <<"Try Again";
        }
    }
    cout << "Number of Bets: " << numberOfBets << endl;
    cout << "Average bets: " << transactions / numberOfBets << endl;
    return 0;
}