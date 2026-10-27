#include <iostream>
#include <vector>
using namespace std;
/*
  This program finds the smallest and largest
    elements in a one-dimensional array.
*/

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

    // Initialize minimum and maximum
    int minElement = arr[0];
    int maxElement = arr[0];

    // Find minimum and maximum
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }

        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    // Display the results
    cout << "Minimum element: " << minElement << endl;
    cout << "Maximum element: " << maxElement << endl;

    return 0;
}