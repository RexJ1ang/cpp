#include <iostream>

using namespace std;

int main() {

    cout << "---------------------------------------\n";
    cout << "Exercise 3\n";
    cout << "---------------------------------------\n";

    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "a + b = " << a + b << "\n";
    cout << "a - b = " << a - b << "\n";
    cout << "a * b = " << a * b << "\n";
    if (b != 0) {
        cout << "a / b = " << a / b << "\n";
        cout << "a % b = " << a % b << "\n";
    } else {
        cout << "Cannot divide by zero\n";
    }
    cout << "a & b = " << (a & b) << "\n";
    cout << "a | b = " << (a | b) << "\n";
    cout << "a ^ b = " << (a ^ b) << "\n";
    cout << "a << 1 = " << (a << 1) << "\n";
    cout << "a >> 1 = " << (a >> 1) << "\n";
    cout << "a == b = " << (a == b) << "\n";
    cout << "a ~ b = " << (~a) << "\n"; // if 2 is 0000 0010 in binary, then ~2 is 1111 1101 in binary, which is -3 in decimal




    return 0;
}
