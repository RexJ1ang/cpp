#include <iostream>
#include <string>
using namespace std;

// Objective: Find all instances of each letter that is in a guess compared to a target word.

// functions
void findLetters(const string& word, const string& guess);

// main
int main() {
    string word = "ferry";
    string guess;
    cout << "*The target word is 5 letters*\nMake a guess!\n";
    cin >> guess;

    findLetters(word, guess);

    return 0;
}

void findLetters(const string& word, const string& guess) {
    string checked(word.length(), ' ');

    for (int i = 0; i < word.length(); i++) { //loops through 5 characters
        int count = 0; // starts the count at 0

        size_t pos = guess.find(word[i]);   // 

        while (pos != string::npos) {
            if (checked[pos] != 'X') {
                count++;
                checked[pos] = 'X';
            }
            pos = guess.find(word[i], pos + 1);
        }


        cout << guess[i] << " is in the target word " << count << " times." << endl;
    }

    
}

// must create a new variable string to keep track of which characters have already been tested. 
