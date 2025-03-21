#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <random>
using namespace std;

int main() {
    vector<string> wordList;    // create a vectore to store a 5 letter word
    ifstream file("words.txt"); // open file words.txt 
    string word;                // initialize a string word to loop through the file

    // Load only 5-letter words
    while (file >> word) {              // read each word in the file
        if (word.length() == 5) {       // check if the word length is five
            wordList.push_back(word);   // push back adds the valid word to wordList
        }
    }

    if (wordList.empty()) {                     // if no vectors are in wordList,
        cout << "No 5-letter words found.\n";   // then give an error message
        return 1;
    }

    // Use C++11+ random
    random_device rd;                                           // random seed
    mt19937 gen(rd());                                          // RNG
    uniform_int_distribution<> dist(0, wordList.size() - 1);    //

    string randomWord = wordList[dist(gen)];
    cout << "Random 5-letter word: " << randomWord << endl;

    //so now i have a random 5 letter word. now i need to be able to compare each letter to user input.
    return 0;
}
