#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    // Get the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Validate the input size
    if (n <= 0)
    {
        cout << "Please enter a positive number of elements." << endl;
        return 1;
    }

    // Create a vector
    vector<int> arr(n);

    // Input array elements
    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Print the array in reverse order
    cout << "Array in reverse order: ";

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}