#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows, cols;

    // Get matrix dimensions
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    // Validate matrix dimensions
    if (rows <= 0 || cols <= 0)
    {
        cout << "Please enter positive dimensions." << endl;
        return 1;
    }

    // Create a 2D vector
    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Input matrix elements
    cout << "Enter matrix elements:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Display the matrix
    cout << "\nMatrix:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }

        cout << endl;
    }

    return 0;
}