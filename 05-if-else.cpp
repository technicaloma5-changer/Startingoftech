#include <iostream>
using namespace std;

int main() {

    // Declare a variable to store the user's age
    int age;

    // Take age as input from the user
    cout << "Enter your age: ";
    cin >> age;

    // Check if the age is 18 or above
    if (age >= 18) {

        // This block runs when the condition is true
        cout << "You are eligible to vote.";
    }
    else {

        // This block runs when the condition is false
        cout << "You are not eligible to vote.";
    }

    
    return 0;
}