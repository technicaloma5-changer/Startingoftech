#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    
    // Description: Demonstrates a loop inside another loop.

    // Outer loop controls the rows.
    for (int i = 1; i <= rows; i++) {

        // Inner loop prints stars in each row.
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        // Move to the next line after each row.
        cout << endl;
    }

    return 0;
}