#include <iostream>
#include <limits>

using namespace std;

int main() {

    cout << "---------------------------------------\n";
    cout << "Exercise 1\n";
    cout << "---------------------------------------\n";

    cout << "max of int: " << numeric_limits<int> :: max() << endl;
    cout << "max of unsigned int: " << numeric_limits<unsigned int> :: max() << endl;
    cout << "max of long long: " << numeric_limits<long long> :: max() << endl;
    cout << "max of unsigned long: " << numeric_limits<unsigned long> :: max() << endl;
    cout << "max of float: " << numeric_limits<float> :: max() << endl;
    cout << "max of double: " << numeric_limits<double> :: max() << endl;
    
    cout << "min of int: " << numeric_limits<int> :: min() << endl;
    cout << "min of unsigned int: " << numeric_limits<unsigned int> :: min() << endl;
    cout << "min of long long: " << numeric_limits<long long> :: min() << endl;
    cout << "min of unsigned long: " << numeric_limits<unsigned long> :: min() << endl;
    cout << "min of float: " << numeric_limits<float> :: lowest() << endl;
    cout << "min of double: " << numeric_limits<double> :: min() << endl;

    cout << "size of int: " << sizeof(int) << " bytes" << endl;
    cout << "size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "size of long long: " << sizeof(long long) << " bytes" << endl;
    cout << "size of unsigned long: " << sizeof(unsigned long) << " bytes" << endl;
    cout << "size of float: " << sizeof(float) << " bytes" << endl;
    cout << "size of double: " << sizeof(double) << " bytes" << endl;

    return 0;
}