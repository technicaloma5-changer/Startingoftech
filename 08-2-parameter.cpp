#include <iostream>
#include <string>

using namespace std;

// Example 1: Function with a single parameter
void greet(string name)
{
    cout << "Hello, " << name << "!" << endl;
}

// Example 2: Function with multiple parameters
int add(int a, int b)
{
    return a + b;
}

// Example 3: Function with parameters of different data types
void displayDetails(string name, int age, double marks)
{
    cout << "\nStudent Details" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
}

// Example 4: Pass by value
void changeValue(int number)
{
    number = 100;
    cout << "Inside function: " << number << endl;
}

int main()
{
    // Example 1: Passing a single argument
    cout << "Example 1: Single Parameter" << endl;
    greet("Rahul");

    // Example 2: Passing multiple arguments
    cout << "\nExample 2: Multiple Parameters" << endl;
    int result = add(10, 20);
    cout << "Sum: " << result << endl;

    // Example 3: Passing different data types
    cout << "\nExample 3: Different Data Types" << endl;
    displayDetails("Amit", 20, 85.5);

    // Example 4: Understanding pass by value
    cout << "\nExample 4: Pass by Value" << endl;

    int number = 50;

    cout << "Before function call: " << number << endl;

    changeValue(number);

    cout << "After function call: " << number << endl;

    return 0;
}