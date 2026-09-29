#include <iostream>
using namespace std;

int main() {

    
    // Logical Operators in C++
    
    
    // &&  -> Logical AND
    // ||  -> Logical OR
    // !   -> Logical NOT
    
    // Logical operators are mainly used with
    // conditions and return either true (1) or false (0).
    


  
    // 1. Logical AND (&&)
    
    // Returns true only when BOTH conditions are true.

    int age = 20;
    bool hasID = true;

    cout << "Logical AND (&&):" << endl;

    cout << (age >= 18 && hasID) << endl;
    
    
    // 2. Logical OR (||)
    
    // Returns true when AT LEAST ONE condition is true.

    bool isStudent = true;
    bool hasDiscountCard = false;

    cout << "\nLogical OR (||):" << endl;

    cout << (isStudent || hasDiscountCard) << endl;


    // 3. Logical NOT (!)
  
    // Reverses the result:
    // true  -> false
    // false -> true

    bool isRaining = false;

    cout << "\nLogical NOT (!):" << endl;

    cout << (!isRaining) << endl;
    
    // 4. Using Logical Operators with Conditions
  

    int marks = 75;

    cout << "\nCondition Examples:" << endl;

    // AND
    if (marks >= 40 && marks <= 100) {
        cout << "Valid passing marks." << endl;
    }

    // OR
    if (marks < 40 || marks > 100) {
        cout << "Invalid marks or failed." << endl;
    } else {
        cout << "Marks are within the valid range." << endl;
    }
    // 5. Combining Multiple Logical Operators
    

    int temperature = 25;
    bool sunny = true;

    if (temperature >= 20 && temperature <= 30 && sunny) {
        cout << "The weather is comfortable and sunny." << endl;
    }


    return 0;
}