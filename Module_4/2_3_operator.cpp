// Operator Demonstration
// o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators.
//   Perform operations using each type of operator and display the results.
// o Objective : Reinforce understanding of different types of operators in C++



#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 3;

    // Arithmetic Operators
    cout << "\n Arithmetic Operators :" << endl;
    cout << "a + b = " << (a + b) << endl; // Addition
    cout << "a - b = " << (a - b) << endl; // Subtraction
    cout << "a * b = " << (a * b) << endl; // Multiplication
    cout << "a / b = " << (a / b) << endl; // Division
    cout << "a % b = " << (a % b) << endl; // Modulus

    // Relational Operators
    cout << "\n Relational Operators :" << endl;
    cout << "a == b : " << (a == b) << endl; // Equal to
    cout << "a != b : " << (a != b) << endl; // Not equal to
    cout << "a > b  : " << (a > b) << endl;  // Greater than
    cout << "a < b  : " << (a < b) << endl;  // Less than
    cout << "a >= b : " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b : " << (a <= b) << endl; // Less than or equal to

    // Logical Operators
    cout << "\n Logical Operators :" << endl;
    bool x = true, y = false;
    cout << "x && y : " << (x && y) << endl; // Logical AND
    cout << "x || y : " << (x || y) << endl; // Logical OR
    cout << "!x     : " << (!x) << endl;     // Logical NOT

    // Bitwise Operators
    cout << "\n Bitwise Operators :" << endl;
    cout << "a & b : " << (a & b) << endl; // Bitwise AND
    cout << "a | b : " << (a | b) << endl; // Bitwise OR
    cout << "a ^ b : " << (a ^ b) << endl; // Bitwise XOR
    cout << "~a    : " << (~a) << endl;    // Bitwise NOT
    cout << "a << 1: " << (a << 1) << endl; // Left shift
    cout << "a >> 1: " << (a >> 1) << endl; // Right shift
}