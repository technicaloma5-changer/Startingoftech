#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c)
{
    return a + b + c;
}

// Function to add two floating-point numbers
double add(double a, double b)
{
    return a + b;
}

// Main function
int main()
{
    // Calling the overloaded functions
    cout << "Addition of two integers: " << add(10, 20) << endl;

    cout << "Addition of three integers: " << add(10, 20, 30) << endl;

    cout << "Addition of two double numbers: " << add(5.5, 4.5) << endl;

    return 0;
}