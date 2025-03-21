#include <iostream>
#include <string>
using namespace std;

//functions
void compareWords(const string& guess, const string& secretWord);
bool isValidWord(const string& word);

//main
int main() {
    string guess;
    string secretWord = "guess";
    cout << "guess the 5 letter word: \n";
    cin >> guess;

    if (isValidWord(guess)) {
        compareWords(guess, secretWord);
    }

    return 0;
}

void compareWords(const string& guess, const string& secretWord) {

    string suffix;

    for (int i = 0; i < secretWord.length(); i++) {
            
            if (i == 0) suffix = "st";
            if (i == 1) suffix = "nd";
            if (i == 2) suffix = "rd";
            if (i > 2)  suffix = "th";

            if (guess[i] == secretWord[i]) {
                cout << "Correct on the " << i + 1 << suffix << " letter right!" << endl;
            } else {
                cout << "incorrect on the " << i + 1 << suffix << " letter!" << endl;
            }
    }
}

bool isValidWord(const string& word) {
    if (word.length() != 5) {
        cout << "Word must be 5 characters long.\n";
        return false;
    }

    for (char c : word) {
        if (!isalpha(c)) {
            cout << "Invalid character detected! Please use only letters.\n";
            return false;
        }
    }

    return true;
}