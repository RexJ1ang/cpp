#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("words.txt");

    if(!file.is_open()) {
        cout << "failed to open file \n";
        return 1;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
    
}