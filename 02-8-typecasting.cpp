#include <iostream>
using namespace std;

int main() {

    // Here int value is automatically converted into double
    int a = 10;
    double b = a;

    cout << "Implicit Casting:" << endl;
    cout << "int value: " << a << endl;
    cout << "double value: " << b << endl;


    // Converting double into int using static_cast
    // The decimal part will be removed
    double x = 10.75;
    int y = static_cast<int>(x);

    cout << "\nExplicit Casting:" << endl;
    cout << "double value: " << x << endl;
    cout << "int value: " << y << endl;


    // A character can be converted into its ASCII value
    char ch = 'A';
    int asciiValue = static_cast<int>(ch);

    cout << "\nCharacter to Integer:" << endl;
    cout << "Character: " << ch << endl;
    cout << "ASCII value: " << asciiValue << endl;


    // Converting an integer value into a character
    int number = 66;
    char character = static_cast<char>(number);

    cout << "\nInteger to Character:" << endl;
    cout << "Integer: " << number << endl;
    cout << "Character: " << character << endl;


    // Normally, integer division gives only the integer part
    int p = 5;
    int q = 2;

    cout << "\nInteger Division:" << endl;
    cout << "5 / 2 = " << p / q << endl;


    // Converting one value to double gives the decimal result
    cout << "\nDivision after Type Casting:" << endl;
    cout << "5 / 2 = " << static_cast<double>(p) / q << endl;


    return 0;
}