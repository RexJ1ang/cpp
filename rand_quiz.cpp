#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); //seeding a random number

    int num1 = rand() % 10; // using the seed to get a rand num 1-10
    int num2 = rand() % 10;

    int userAnswer;

    while(true) {
        cout << "What is " << num1 << " + " << num2 << "? "; // asking for user input with cin >>
        cin >> userAnswer;
        
        if (cin.fail()) {                   //checking if user input was an integer
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input";
        } else if (userAnswer == num1 + num2) {
            cout << "Correct!!\n";
            break;     
        } else {
            cout << "Wrong, Try Again!\n";
        }
        
    }
    return 0;
}