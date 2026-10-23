#include <iostream>
using namespace std;

// Recursive function to print numbers from n to 1
void printNumbers(int n)
{
    // Base case: Stop recursion when n becomes 0
    if (n == 0)
    {
        return;
    }

    // Print the current number
    cout << n << " ";

    // Recursive call
    printNumbers(n - 1);
}

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    cout << "Numbers from " << n << " to 1: ";

    printNumbers(n);

    cout << endl;

    return 0;
}
