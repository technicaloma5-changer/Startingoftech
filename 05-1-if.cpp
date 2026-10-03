#include <iostream>
using namespace std;

int main() {
    int age;

    // Taking age as input from the user
    cout << "Enter your age: ";
    cin >> age;

    // Checking if the person is 18 or older
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    }

    return 0;
}