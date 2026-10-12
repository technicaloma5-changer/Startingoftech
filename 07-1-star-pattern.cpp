#include <iostream>
using namespace std;

// 1. Square Star Pattern
void squarePattern(int n)
{
    cout << "\n1. Square Pattern\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}

// 2. Right-Angled Triangle
void rightTriangle(int n)
{
    cout << "\n2. Right-Angled Triangle\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}

// 3. Inverted Right-Angled Triangle
void invertedTriangle(int n)
{
    cout << "\n3. Inverted Triangle\n";

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}

// 4. Right-Aligned Triangle
void rightAlignedTriangle(int n)
{
    cout << "\n4. Right-Aligned Triangle\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << '\n';
    }
}

// 5. Pyramid Pattern
void pyramidPattern(int n)
{
    cout << "\n5. Pyramid Pattern\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << ' ';
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << '*';
        }

        cout << '\n';
    }
}

int main()
{
    int n;

    cout << "Enter the number of rows (1-50): ";
    cin >> n;

    if (cin.fail() || n < 1 || n > 50)
    {
        cout << "Invalid input! Please enter a number from 1 to 50.\n";
        return 1;
    }

    squarePattern(n);
    rightTriangle(n);
    invertedTriangle(n);
    rightAlignedTriangle(n);
    pyramidPattern(n);

    return 0;
}
