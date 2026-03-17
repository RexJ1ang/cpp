#include <iostream>

using namespace std;

int main() {
    cout << "---------------------------------------\n";
    cout << "Exercise 2\n";
    cout << "---------------------------------------\n";

    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr; // Initialize pointer to the first element of the array so int* ptr = &arr[0] is also correct
    cout << *ptr << "\n"; // Output: 10
    cout << *(ptr + 1) << "\n"; // Output: 20
    cout << *(ptr + 2) << "\n"; // Output: 30
    cout << *(ptr + 3) << "\n"; // Output: 40
    cout << *(ptr + 4) << "\n"; // Output: 50

    //now dereference using nullptr
    ptr = nullptr; // Set pointer to nullptr
    if (ptr) { // Check if pointer is not null before dereferencing
        cout << *ptr << "\n"; // This will not execute since ptr is nullptr
    } else {
        cout << "Pointer is null, cannot dereference\n"; // Output: Pointer is null, cannot dereference
    }

    return 0;

}

/*
why does int* ptr = arr; work?
In C++, when you declare an array, the name of the array (in this case, arr) is treated as a pointer to the first element of the array. 
Therefore, when you write int* ptr = arr;, you are initializing the pointer ptr to point to the first element of the array arr. 
This is equivalent to writing int* ptr = &arr[0];, which explicitly takes the address of the first element of the array. 
Both statements achieve the same result, allowing you to use ptr to access the elements of the array through pointer arithmetic.

writing int *ptr = arr points ptr to the first element of the array arr, which is 10.
what does dereferencing a pointer mean?
Dereferencing a pointer means accessing the value stored at the memory address that the pointer is pointing to.
In the code snippet, when we write *ptr, we are dereferencing the pointer ptr to access the value at the memory address it points to.

what if we used int ptr = arr; instead of int* ptr = arr;?
If we used int ptr = arr; instead of int* ptr = arr;, it would result in a compilation error.
This is because arr is an array, and when we try to assign it to an int variable
(ptr), we are trying to assign the address of the first element of the array to an integer variable, which is not allowed in C++.
The correct way to assign the address of the first element of the array to a pointer variable is to use int* ptr = arr; or int* ptr = &arr[0];.

what does &arr[0] mean?
&arr[0] means "the address of the first element of the array arr".
In C++, the name of an array (arr) can be used as a pointer to the first element of the array.

so why is int* ptr = arr; equivalent to int* ptr = &arr[0];?
what is a pointer in C++?
A pointer in C++ is a variable that stores the memory address of another variable.

so int *ptr = arr; means that ptr is a pointer to an integer, and it is initialized to point to the first element of the array arr.
to read it in a more natural way, we can say "ptr is a pointer to an integer, and it points to the first element of the array arr".
we can also say that a pointer is a variable that holds the address of another variable, and in this case, ptr holds the address of the first element of the array arr.

does a * in front of a variable always mean that it is a pointer?
No, a * in front of a variable does not always mean that it is a pointer.
In C++, the * symbol can have different meanings depending on the context in which it is used. 
When used in a variable declaration, such as int* ptr;, it indicates that ptr is a pointer to an integer.
However, when used in an expression, such as *ptr, it indicates that we are dereferencing the pointer ptr to access the value it points to.

does *ptr refer to an address or a value?
*ptr refers to the value stored at the memory address that ptr is pointing to. 
When we dereference a pointer using *ptr, we are accessing the value at the memory address that ptr holds.

to get the address that ptr is pointing to, we can simply use ptr without the * operator.
for example if we want to print the address that ptr is pointing to, we can use cout << ptr << "\n"; which will output the memory address of the first element of the array arr.
this only works because ptr is a pointer variable that holds the address of the first element of the array arr.
*/