#include <iostream>
using namespace std;

int main() {
    // Example of break statement

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }

        cout << i << " ";
    }

    cout << "\nLoop terminated using break." << endl;

    return 0;
}
