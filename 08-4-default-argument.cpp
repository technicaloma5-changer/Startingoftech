#include <iostream>
using namespace std;

// Function with default arguments
void greet(string name = "Student", string message = "Welcome to C++ Programming!")
{
    cout << "Hello, " << name << "! " << message << endl;
}

int add(int a, int b = 10)
{
    return a + b;
}

int main()
{
    // Example 1: Using all default arguments
    cout << "Example 1: Using Default Arguments" << endl;
    greet();

    cout << endl;

    // Example 2: Providing one argument
    cout << "Example 2: Providing One Argument" << endl;
    greet("Rahul");

    cout << endl;

    // Example 3: Providing both arguments
    cout << "Example 3: Providing Both Arguments" << endl;
    greet("Amit", "Keep Learning C++!");

    cout << endl;

    // Example 4: Default argument in a calculation
    cout << "Example 4: Default Argument in Addition" << endl;

    cout << "add(5) = " << add(5) << endl;
    cout << "add(5, 20) = " << add(5, 20) << endl;

    return 0;
}