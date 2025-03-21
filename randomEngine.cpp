#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <random>
using namespace std;

int main() {
// create a vector to store a 5 letter word
    vector<string> wordList;
// open file words.txt 
    ifstream file("words.txt");
// initialize a string word to loop through the file
    string word;
// read each word in the file
    while(file >> word) {
// check if the word length is five
        if(word.length() == 5) {
// push back adds the valid word to wordList   
            wordList.push_back(word);
        }
    }
// if no vectors are in wordList,
if(wordList.empty()) {
// then give an error message
    cout << "Invalid word";
    return 1;
}
// random seed
random_device rd;
// RNG
mt19937 gen(rd());
uniform_int_distribution<> dist(0, wordList.size() - 1); 

string randomWord = wordList[dist(gen)];
cout << randomWord << "\n";

return 0;
}
