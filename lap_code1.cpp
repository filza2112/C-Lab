#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, next;
    cout << "Fibonacci Sequence: ";
    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

void halfPyramid(int rows) {
    cout << "Half Pyramid of *:\n";
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int findMax(const int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    int n, rows, num;
    const int arrSize = 5;
    int array[arrSize] = {4, 7, 2, 9, 1};

    cout << "Enter the number of terms for Fibonacci sequence: ";
    cin >> n;
    fibonacci(n);

    cout << "Enter the number of rows for half pyramid: ";
    cin >> rows;
    halfPyramid(rows);

    cout << "Enter a number to find its factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    cout << "Max Element in the array: " << findMax(array, arrSize) << endl;

    return 0;
}
