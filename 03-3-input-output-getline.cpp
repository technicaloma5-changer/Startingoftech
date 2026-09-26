#include <iostream>
#include <string>
using namespace std;

int main() {

    // Taking a full line of text as input
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    // Displaying the entered text
    cout << "Your name is: " << fullName << endl;

    // Taking another line of input
    string address;

    cout << "Enter your address: ";
    getline(cin, address);

    // Displaying the entered address
    cout << "Your address is: " << address << endl;

    return 0;
}