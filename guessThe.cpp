#include <iostream>
#include <random>

using namespace std;

int main() {

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1,100);
    int randomNumber = dist(gen);

    int guess;

    cout << "Guess the number 1-100" << endl;
    

    do {
        cin >> guess;
        
        if (guess < randomNumber) {
            cout << "Higher!" << endl;
        }
        else if (guess > randomNumber) {
            cout << "Lower!" << endl;
        }
        else {
            cout << "You are correct!" << endl;
        }
    } while (guess != randomNumber);

    

    return 0;
}