#include <iostream>

using namespace std;

int main() {
    int x = 5;
    int y = 0;

    // Bug 1
    if (x == 10) { //need an == instead of =
        std::cout << "x is 10\n";
    }

    // Bug 2
    unsigned int a = 5;
    unsigned int b = 10;
    if (a > b) {
        std::cout << "a is greater than b\n";
    }

    // Bug 3 - floating point comparison is not reliable due to precision issues 
    float f = 0.1f + 0.2f;
    if (abs(f - 0.3f) < 1e-6) { // Use a small tolerance for floating-point comparison
        std::cout << "equal\n";
    } else {
        std::cout << "not equal\n";
    }

    cout << "---------------------------------------\n";



// Q2, fix the bugs in the following code snippet and explain the output of each line.

    int num1 = 2;
    int num2 = 3;
    int num3 = 4;

    std::cout << (num1 + num2 * num3)     << "\n"; 
    std::cout << (num1 + num2 * num3 == 14) << "\n";
    std::cout << (num1 << 1 + num2)    << "\n";
    std::cout << (num1 & num2 | num3)     << "\n";

    // Explanation of the output:
    // Line 1: The expression is evaluated as num1 + (num2 * num3) due to operator precedence.
    //         This results in 2 + (3 * 4) = 2 + 12 = 14.
    // Line 2: The expression checks if num1 + num2 * num3 is   equal to 14, which is true, so it outputs 1 (true).
    // Line 3: The expression is evaluated as num1 << (1 + num2) due to operator precedence.
    //         This results in 2 << (1 + 3) = 2 <<  
    //         4 = 2 * 2^4 = 2 * 16 = 32.
    // Line 4: The expression is evaluated as (num1 & num2) | num3 due to operator precedence.
    //         This results in (2 & 3) | 4 = 2 | 4 = 6.
    //the & operator performs a bitwise AND operation, and the | operator performs a bitwise OR operation.
    // a bitwise AND operation compares each bit of the operands and returns a new value where each bit is set to 1 only if both corresponding bits of the operands are 1. In this case, 2 (binary 10) AND 3 (binary 11) results in 2 (binary 10).
    // a bitwise OR operation compares each bit of the operands and returns a new value where each bit is set to 1 if at least one of the corresponding bits of the operands is 1. In this case, 2 (binary 10) OR 4 (binary 100) results in 6 (binary 110).
    //a bitwise AND is useful for masking bits, while a bitwise OR is useful for setting bits.
    //masking bits means to isolate specific bits in a value, while setting bits means to turn specific bits on in a value.

    //for example, if you want to check if the second bit of a number is set, you can use a bitwise AND operation with a mask that has only 
    //the second bit set (e.g., 0b10). If the result is non-zero, it means the second bit is set. On the other hand,
    // if you want to set the second bit of a number, you can use a bitwise OR operation with a mask that has only the second bit set (e.g., 0b10). This will turn on the second bit regardless of its previous state.

    //this is mainly used in low-level programming, such as embedded systems or performance-critical code, where direct manipulation of bits can lead to more efficient algorithms and data structures.
    
    return 0;
}