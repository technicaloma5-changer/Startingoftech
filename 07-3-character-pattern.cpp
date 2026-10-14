#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    if (rows <= 0)
    {
        cout << "Please enter a positive number of rows." << endl;
        return 0;
    }

    // Pattern 1: Alphabet Triangle
    cout << "\nPattern 1: Alphabet Triangle\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << static_cast<char>('A' + j) << " ";
        }

        cout << endl;
    }

    // Pattern 2: Repeated Character Triangle
    cout << "\nPattern 2: Repeated Character Triangle\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << static_cast<char>('A' + i) << " ";
        }

        cout << endl;
    }

    // Pattern 3: Reverse Alphabet Triangle
    cout << "\nPattern 3: Reverse Alphabet Triangle\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << static_cast<char>('A' + i - j) << " ";
        }

        cout << endl;
    }

    // Pattern 4: Alphabet Pyramid
    cout << "\nPattern 4: Alphabet Pyramid\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << static_cast<char>('A' + j) << " ";
        }

        cout << endl;
    }

    return 0;
}