#include <iostream>
using namespace std;

int main() {

    // Variable to store the day number entered by the user
    int day;

    // Asking the user to enter a number from 1 to 7
    cout << "Enter day number (1-7): ";
    cin >> day;

    // Using switch-case to check the entered day
    switch (day) {

        // If user enters 1
        case 1:
            cout << "Monday";
            break;

        // If user enters 2
        case 2:
            cout << "Tuesday";
            break;

        // If user enters 3
        case 3:
            cout << "Wednesday";
            break;

        // If user enters 4
        case 4:
            cout << "Thursday";
            break;

        // If user enters 5
        case 5:
            cout << "Friday";
            break;

        // If user enters 6
        case 6:
            cout << "Saturday";
            break;

        // If user enters 7
        case 7:
            cout << "Sunday";
            break;

        // If number is not between 1 and 7
        default:
            cout << "Invalid day number";
    }

    return 0;
}