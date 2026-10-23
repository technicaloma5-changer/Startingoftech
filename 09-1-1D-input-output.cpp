#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Step 1: Get the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Step 2: Validate the input
    if (n <= 0) {
        cout << "Please enter a positive number of elements." << endl;
        return 1;
    }

    // Step 3: Create a vector to store elements
    vector<int> arr(n);

    // Step 4: Take array elements as input
    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 5: Display the elements
    cout << "Array elements are: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}