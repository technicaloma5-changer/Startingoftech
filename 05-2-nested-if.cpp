#include <iostream>
using namespace std;

int main() {
    // Taking age as input from the user
    int age;

    // Taking ID status from the user
    char hasID;

    cout << "Enter your age: ";
    cin >> age;

    // Checking if the person is 18 or older
    if (age >= 18) {

        cout << "Do you have a valid ID? (y/n): ";
        cin >> hasID;

        // Nested if: checking the ID after checking the age
        if (hasID == 'y' || hasID == 'Y') {
            cout << "You are allowed to enter." << endl;
        } else {
            cout << "You need a valid ID to enter." << endl;
        }

    } else {
        // Person is under 18
        cout << "You are not eligible to enter." << endl;
    }

    return 0;
}