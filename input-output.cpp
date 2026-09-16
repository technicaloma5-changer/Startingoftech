#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name; // string data type for word
    int age;     // int for number
    string branch;
    float cgpa; // float for decimal point

    // Taking information from the user

    cout << "Enter your name: ";
    getline(cin, name); // for fullname with space

    cout << "Enter your age: ";
    cin >> age; //input from user and stores in the variable

    cin.ignore(); // removes the Enter key left by cin

    cout << "Enter your branch: ";
    getline(cin, branch);

    cout << "Enter your CGPA: ";
    cin >> cgpa;

    // Displaying the information of student

    cout << "\n##### Student Profile ########" << endl;

    cout << "Name   : " << name << endl; //storable value showing
    cout << "Age    : " << age << endl;
    cout << "Branch : " << branch << endl;
    cout << "CGPA   : " << cgpa << endl;
    cout << "#### thank you for filling information ####" << endl;
    cout << "#################" << endl;

    return 0;
}