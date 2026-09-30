#include <iostream>
using namespace std;

int main() {

    // Basic assignment operator (=)
    int number = 10;
    cout << "Initial value: " << number << endl;

    // Addition assignment (+=)
    number += 5;
    cout << "After += 5: " << number << endl;

    // Subtraction assignment (-=)
    number -= 3;
    cout << "After -= 3: " << number << endl;

    // Multiplication assignment (*=)
    number *= 2;
    cout << "After *= 2: " << number << endl;

    // Division assignment (/=)
    number /= 4;
    cout << "After /= 4: " << number << endl;

    // Modulus assignment (%=)
    number %= 3;
    cout << "After %= 3: " << number << endl;

    return 0;
}