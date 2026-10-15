#include <iostream>
using namespace std;

// 1. Right-Aligned Star Pyramid
void rightAlignedPyramid(int rows)
{
    cout << "\n1. Right-Aligned Star Pyramid\n";

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

// 2. Full Star Pyramid
void fullPyramid(int rows)
{
    cout << "\n2. Full Star Pyramid\n";

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

// 3. Inverted Pyramid
void invertedPyramid(int rows)
{
    cout << "\n3. Inverted Star Pyramid\n";

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

// 4. Number Pyramid
void numberPyramid(int rows)
{
    cout << "\n4. Number Pyramid\n";

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

// 5. Hollow Pyramid
void hollowPyramid(int rows)
{
    cout << "\n5. Hollow Star Pyramid\n";

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == rows)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}

int main()
{
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    if (rows <= 0)
    {
        cout << "Please enter a positive number of rows." << endl;
        return 1;
    }

    rightAlignedPyramid(rows);
    fullPyramid(rows);
    invertedPyramid(rows);
    numberPyramid(rows);
    hollowPyramid(rows);

    return 0;
}