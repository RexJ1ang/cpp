#include <iostream>
#include <string>
using namespace std;

/*
    Find all occurrences of a letter in a word
*/

//functions
void numInstances(const string& word, const char letter);

//main
int main() {
    string randomWord = "ferry";
    char letter;
    cout << "Enter your letter to check: \n";
    cin >> letter;

    numInstances(randomWord, letter);

    return 0;
}

void numInstances(const string& word, const char letter) {
    int numInstances = 0;
    size_t pos = word.find(letter);

    while (pos != string::npos) {
        numInstances++;
        pos = word.find(letter, pos + 1);
    }

    cout << "instances of '" << letter << "' appear " << numInstances << " time(s)" << endl;
}

