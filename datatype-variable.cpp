#include <iostream>
#include <string>
using namespace std;

int main() {

    // Variables of different data types

    int age = 20;
    float height = 5.8f;
    double percentage = 85.75;
    char grade = 'A';
    bool isStudent = true;
    string name = "Gopal";

    // Displaying the values of variable 

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    // Displaying boolean value as true/false
    cout << boolalpha;
    cout << "Is Student: " << isStudent << endl;

    return 0;
}