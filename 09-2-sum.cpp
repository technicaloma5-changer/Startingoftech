/*
    This program calculates the sum of all elements
    in a one-dimensional array using a vector.
*/
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

    vector<int> arr(n);

    // Input array elements
    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Calculate the sum
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // Display the result
    cout << "Sum of array elements: " << sum << endl;

    return 0;
}