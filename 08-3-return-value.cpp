#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b)
{
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b)
{
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b)
{
    if (b == 0)
    {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0.0;
    }

    return a / b;
}

// Function to calculate the square of a number
int square(int number)
{
    return number * number;
}

int main()
{
    // Variables
    int num1 = 20;
    int num2 = 10;

    // Calling functions and storing returned values
    int sum = add(num1, num2);
    int difference = subtract(num1, num2);
    int product = multiply(num1, num2);
    double quotient = divide(num1, num2);
    int squaredValue = square(num1);

    // Display results
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;

    cout << "\nAddition: " << sum << endl;
    cout << "Subtraction: " << difference << endl;
    cout << "Multiplication: " << product << endl;
    cout << "Division: " << quotient << endl;
    cout << "Square of First Number: " << squaredValue << endl;

    return 0;
}