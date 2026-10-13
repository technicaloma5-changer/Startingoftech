
#include <iostream>
using namespace std;

// 1. Square Number Pattern
void squarePattern(int n) {
    cout << "\n1. Square Number Pattern\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << '\n';
    }
}

// 2. Increasing Number Triangle
void increasingTriangle(int n) {
    cout << "\n2. Increasing Number Triangle\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << '\n';
    }
}

// 3. Repeated Row Number Triangle
void repeatedNumberTriangle(int n) {
    cout << "\n3. Repeated Row Number Triangle\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << '\n';
    }
}

// 4. Inverted Number Triangle
void invertedTriangle(int n) {
    cout << "\n4. Inverted Number Triangle\n";

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << '\n';
    }
}

// 5. Floyd's Triangle
void floydsTriangle(int n) {
    cout << "\n5. Floyd's Triangle\n";

    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << '\n';
    }
}

// 6. Binary Number Triangle
void binaryTriangle(int n) {
    cout << "\n6. Binary Number Triangle\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (j % 2) << " ";
        }
        cout << '\n';
    }
}

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number.\n";
        return 0;
    }

    squarePattern(n);
    increasingTriangle(n);
    repeatedNumberTriangle(n);
    invertedTriangle(n);
    floydsTriangle(n);
    binaryTriangle(n);

    return 0;
}
