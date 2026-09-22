#include <iostream>
using namespace std;

int main() {

    // Making some boolean variables
    bool isStudent = true;
    bool isAdult = false;
    bool isMale = true;
    bool isMarried = false;

    // Printing boolean values
    cout << "Is Student: " << isStudent << endl;
    cout << "Is Adult: " << isAdult << endl;
    cout << "Is Male: " << isMale << endl;
    cout << "Is Married: " << isMarried << endl;

    // By default true is printed as 1 and false as 0
    // boolalpha is used to print true and false
    cout << boolalpha;

    // Printing the values again
    cout << "Is Student: " << isStudent << endl;
    cout << "Is Adult: " << isAdult << endl;
    cout << "Is Male: " << isMale << endl;
    cout << "Is Married: " << isMarried << endl;

    return 0;
}
