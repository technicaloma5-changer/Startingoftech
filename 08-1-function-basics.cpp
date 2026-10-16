#include <iostream>
using namespace std;

// Function Declaration
void greet();
void displayMessage();
void printNumber();
int addNumbers();

int main()
{
    // Calling a function
    greet();

    // Calling a function to display a message
    displayMessage();

    // Calling a function to print a number
    printNumber();

    // Calling a function that returns a value
    int result = addNumbers();

    cout << "Sum of two numbers: " << result << endl;

    return 0;
}

// Function Definition
void greet()
{
    cout << "Hello! Welcome to C++ Functions." << endl;
}

// Function to display a message
void displayMessage()
{
    cout << "Functions help us organize our code." << endl;
}

// Function to print a number
void printNumber()
{
    cout << "The number is: 100" << endl;
}

// Function that returns a value
int addNumbers()
{
    int a = 10;
    int b = 20;

    return a + b;
}