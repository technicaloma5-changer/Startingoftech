#include <iostream>
using namespace std;

int main() {

    
    // Constants in C++
   

    // Normal variable
    int age = 20;

    // Constant variable
    const int daysInWeek = 7;
    const double pi = 3.14159;

    cout << "Age: " << age << endl;
    cout << "Days in a week: " << daysInWeek << endl;
    cout << "Value of Pi: " << pi << endl;

    // Normal variable can be changed
    age = 21;

    cout << "Updated age: " << age << endl;

    // Constant cannot be changed
    
    // daysInWeek = 8;   //shoi ERROR                                            sometimes 
    
    // pi = 3.14;        // show ERROR                                           some time 

    return 0;
}