#include <iostream>
#include <string>
using namespace std;

int main() {
    string userGuess;
    string secretWord = "hello";

    cout << "guess the word: \n";
    cin >> userGuess;

    if(userGuess.compare(secretWord) == 0) {
        cout << "you guessed the word!\n";
    } else {
        cout << "not the word we're looking for!\n";
        return 1;
    }

    return 0;
}