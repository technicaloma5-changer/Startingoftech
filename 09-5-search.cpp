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

    // Get the element to search
    int target;

    cout << "Enter the element to search: ";
    cin >> target;

    // Perform Linear Search
    int position = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            position = i;
            break;
        }
    }

    // Display the result
    if (position != -1)
    {
        cout << "Element found at index: " << position << endl;
        cout << "Element found at position: " << position + 1 << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}