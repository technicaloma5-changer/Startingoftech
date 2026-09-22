#include <iostream>
using namespace std;

int main() {
    // Character variable
    char grade = 'A';

    // Character can store a single character
    char symbol = '#';

    cout << "Grade: " << grade << endl;
    cout << "Symbol: " << symbol << endl;

    // Character can also be treated as an integer (ASCII value)
    char letter = 'B';

    cout << "Character: " << letter << endl;
    cout << "ASCII value: " << static_cast<int>(letter) << endl;

    return 0;
}