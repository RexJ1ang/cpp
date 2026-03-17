#include <iostream>

using namespace std;

int main() {
    cout << "---------------------------------------\n";
    cout << "Exercise 5\n";
    cout << "---------------------------------------\n";

    /* 
    what is the heap and the stack in C++?

    The heap and the stack are two different areas of memory used for different purposes in C++.

    The stack is a region of memory that is used for storing local variables and function call information.
    for example, when you declare a local variable inside a function, that variable is stored on the stack.

    When a function is called, a new stack frame is created on the stack to hold the local variables and return address for that function.
    The stack is managed automatically by the compiler and is typically faster than the heap because it has a
    LIFO (Last In, First Out) structure.

    The heap, on the other hand, is a region of memory that is used for dynamic memory allocation.
    When you use the new operator to allocate memory for an object or an array, that memory is allocated on the heap.   
    The heap is managed manually by the programmer, and you need to use the delete operator to free the memory when you are done with it.
    The heap is typically slower than the stack because it has a more complex structure and requires more overhead for memory management.
    for example, when you allocate memory for an object using new, the memory is allocated on the heap, 
    and you need to remember to free that memory using delete when you are done with it. If you forget to free the memory, it can lead to memory leaks.

    The easiest way to remember the difference between the heap and the stack is to think of the stack as a 
    "temporary" memory area that is used for function calls and local variables, while the heap is a "permanent" memory area that is 
    used for dynamic memory allocation.

    The stack is automatically managed by the compiler, while the heap requires manual management by the programmer.
    The stack is typically faster than the heap because it has a simpler structure and is managed automatically
    The heap is typically slower than the stack because it has a more complex structure and requires more overhead for memory management.

    STACK : temporary memory area used for function calls and local variables, automatically managed by the compiler, typically faster than the heap.
    HEAP : permanent memory area used for dynamic memory allocation, manually managed by the programmer, typically slower than the stack.
     */

    //new int(5); // Allocates an integer with value 5 on the heap, but we are not storing the pointer to it, so we cannot free it later, which leads to a memory leak.

    int *ptr = new int(5);
    cout << "Value of ptr: " << *ptr << "\n"; // Output: 5
    delete ptr; // Free the memory allocated on the heap to prevent memory leaks.

    ptr = nullptr; // Set pointer to nullptr after deleting to avoid dangling pointer.
    
    return 0;

}