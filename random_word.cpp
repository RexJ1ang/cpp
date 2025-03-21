#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;

int main() {
    srand(time(0));

    //int num = rand() % 10 
    //to get a random word from a list of words, we need to do the same but for string instead of int
    //int num = string randomWord
    //10 = int numWords
    //rand() for strings is stringArr[rand() % numWords]

    string words[] = {
        "apple", "bread", "crane", "doubt", "flame",
        "grape", "house", "joker", "knife", "light"
    };

    int totalBytesinWords = sizeof(words); //returns an int for the number of bytes string words is using
    int sizeAtZero = sizeof(words[0]); // returns the size memory of "apple". each string object takes up 32 bytes and is stored in the stack.
                                       // the actual 'apple' character string is stored in the heap.
    /*
    cout << sizeWord << "\n";
    cout << sizeAtZero << "\n";
    cout << numWords << "\n";
    */

    int numWords = sizeof(words) / sizeof(words[0]);
    string randomWord = words[rand() % numWords];

    cout << randomWord << "\n";

    return 0;
}