#include <iostream>

using namespace std;

int main() {

    cout << "---------------------------------------\n";
    cout << "Exercise 4\n";
    cout << "---------------------------------------\n";

    int a;
    int b;

    int&refA = a; // refA is a reference to a
    int&refB = b; // refB is a reference to b

    cout << "Enter an integer: ";
    cin >> a;
    cout << "Value of a: " << a << "\n";
    cout << "Value of a using reference: " << refA << "\n";

    refA = 10; // refA is a reference to a, so changing refA changes a
    cout << a << "\n"; // Output: 10
    
    cout << "Enter another integer: ";
    cin >> b;
    cout << "Value of b: " << b << "\n";
    cout << "Value of b using reference: " << refB << "\n";

    int *ptr = &a; // ptr is a pointer to a
    cout << "Value of a using pointer: " << *ptr << "\n";
    ptr = &b; // ptr now points to b
    cout << "Value of b using pointer: " << *ptr << "\n";

    return 0;

}