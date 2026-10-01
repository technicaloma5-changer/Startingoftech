#include <iostream>
using namespace std;

int main() {

// Increment operator (++) increases the value by 1
int a = 5;

cout << "Original value of a: " << a << endl;

a++;
cout << "After increment (a++): " << a << endl;


// Decrement operator (--) decreases the value by 1
int b = 10;

cout << "\nOriginal value of b: " << b << endl;

b--;
cout << "After decrement (b--): " << b << endl;


// Pre-increment increases the value first, then uses it
int x = 5;

cout << "\nPre-increment (++x): " << ++x << endl;


// Post-increment uses the current value first, then increases it
int y = 5;

cout << "Post-increment (y++): " << y++ << endl;
cout << "Value of y after post-increment: " << y << endl;


// Pre-decrement decreases the value first, then uses it
int p = 5;

cout << "\nPre-decrement (--p): " << --p << endl;


// Post-decrement uses the current value first, then decreases it
int q = 5;

cout << "Post-decrement (q--): " << q-- << endl;
cout << "Value of q after post-decrement: " << q << endl;

return 0;

}