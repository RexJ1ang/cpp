#include <iostream>
using namespace std;

int main() {

    int answer;

    while (true) {
    cout << "What is 1 + 1\n"; 
    cin >> answer; //ask for user inut

    if (cin.fail()) {                     //handles invalid letters
        cin.clear();                      //clears error flag
        cin.ignore(1000, '\n');             //discards invalid outputs
        cout << "Enter an integer.\n";
    } else if (answer == 2) {
        cout << "You are correct!\n";
        break;
    } else {
        cout << "Incorrect!\n";
    }
}
    
  return 0;

}