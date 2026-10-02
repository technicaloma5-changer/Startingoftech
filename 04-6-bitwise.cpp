#include <iostream>
using namespace std;

int main() {
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011

    // Bitwise AND (&)
    cout << "a & b = " << (a & b) << endl;

    // Bitwise OR (|)
    cout << "a | b = " << (a | b) << endl;

    // Bitwise XOR (^)
    cout << "a ^ b = " << (a ^ b) << endl;

    // Bitwise NOT (~)
    cout << "~a = " << (~a) << endl;

    // Left Shift (<<)
    cout << "a << 1 = " << (a << 1) << endl;

    // Right Shift (>>)
    cout << "a >> 1 = " << (a >> 1) << endl;

    return 0;
}