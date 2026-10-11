#include <iostream>
using namespace std;

int main() {
    // Printing the heading
    cout << "Continue Statement Example" << endl;
    cout << "Numbers from 1 to 10, skipping 5:" << endl;

    // Loop runs from 1 to 10
    for (int i = 1; i <= 10; i++) {

        // Skip 5 and move to the next number
        if (i == 5) {
            continue;
        }

        // Print the current number
        cout << i << " ";
    }

    // Move to the next line
    cout << endl;

    return 0;
}