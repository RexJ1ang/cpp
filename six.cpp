#include <iostream>

using namespace std;

/*
what is the difference between a pointer and a reference in C++?
A pointer is a variable that stores the memory address of another variable, while a reference is an alias for another variable.
A pointer can be reassigned to point to different variables, while a reference cannot be reassigned and must be initialized when it is declared.
A pointer can be null, meaning it does not point to any variable, while a reference must always refer to a valid variable.
A pointer can be dereferenced to access the value of the variable it points to, while a reference can be used directly to access the value of the variable it refers to.
In summary, a pointer is a variable that holds the address of another variable and can be reassigned, while a reference is an alias for another variable that cannot be reassigned and must always refer to a valid variable.

*-----------------------------------Passing by value, reference, and pointer--------------------------------------------*

what is passing by value, passing by reference, and passing by pointer in C++?

passing by value means that a copy of the variable is passed to the function, 
and any changes made to the variable inside the function do not affect the original variable outside the function.
    for example, if you have a function that takes an integer parameter and you pass an integer variable to it, 
    the function will receive a copy of the variable, and any changes made to the parameter inside the function will not affect the original variable outside the function.

passing by reference means that a reference to the variable is passed to the function, 
and any changes made to the variable inside the function affect the original variable outside the function.
    for example, if you have a function that takes an integer reference parameter and you pass an integer variable to it,
    the function will receive a reference to the variable, and any changes made to the parameter inside the function will affect 
    the original variable outside the function.

passing by pointer means that a pointer to the variable is passed to the function, 
and any changes made to the variable through the pointer inside the function affect the original variable outside the function.
    for example, if you have a function that takes an integer pointer parameter and you pass the address of an integer variable to it, 
    the function will receive a pointer to the variable, 
    and any changes made to the variable through the pointer inside the function will affect the original variable outside the function.

In summary, passing by value creates a copy of the variable,
passing by reference allows the function to modify the original variable,
and passing by pointer allows the function to modify the original variable through a pointer.

fundamementally, the biggest difference between passing by reference and passing by pointer is that passing by reference is safer and easier to use,
while passing by pointer can be more flexible but also more error-prone due to the possibility of null pointers and pointer arithmetic.

the one widely used in industry is passing by reference, because it is safer and easier to use, while passing by pointer can lead to bugs if not used carefully.

how do you pass by value, reference, and pointer in C++? 
c++ code examples:
// Passing by value
void passByValue(int x) {
    x = 10; // This change will not affect the original variable
}
void passByReference(int &x) {
    x = 10; // This change will affect the original variable
}
void passByPointer(int *x) {
    *x = 10; // This change will affect the original variable
}

*/


void passByValue(int x) {
    x = 10; // This change will not affect the original variable
}

void passByReference(int &x) {
    x = 10; // This change will affect the original variable
}

void passByPointer(int *x) {
    *x = 10; // This change will affect the original variable
}

int main() {

    int x = 5;
    cout << "Original value of x: " << x << "\n"; // Output: 5
    passByValue(x);
    cout << "Value of x after passByValue: " << x << "\n"; // Output: 5
    passByReference(x);
    cout << "Value of x after passByReference: " << x << "\n"; // Output: 10
    passByPointer(&x);
    cout << "Value of x after passByPointer: " << x << "\n"; // Output: 10
    

    return 0;
}