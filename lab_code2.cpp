#include <bits/stdc++.h>
using namespace std;

// Function to print matrix in helical form
void printHelicalMatrix(int matrix[3][3]) {
    int top = 0, bottom = 3 - 1, left = 0, right = 3 - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; ++i) {
            cout << matrix[top][i] << " ";
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; ++i) {
            cout << matrix[i][right] << " ";
        }
        right--;

        // Print bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        // Print left column
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}

// Function to print frequency of each element in an array
void printFrequency(const int arr[], int size) {
    unordered_map<int, int> frequency;
    for (int i = 0; i < size; ++i) {
        frequency[arr[i]]++;
    }

    cout << "Frequency of each element in the array:\n";
    for (const auto& entry : frequency) {
        cout << entry.first << ": " << entry.second << " times\n";
    }
}

// Function to count total number of duplicates in an array
int countDuplicates(const int arr[], int size) {
    unordered_map<int, int> frequency;
    int duplicates = 0;

    for (int i = 0; i < size; ++i) {
        frequency[arr[i]]++;
        if (frequency[arr[i]] == 2) {
            duplicates++;
        }
    }

    return duplicates;
}

// Function to print all unique elements in an array
void printUniqueElements(const int arr[], int size) {
    unordered_map<int, int> frequency;

    cout << "Unique elements in the array:\n";
    for (int i = 0; i < size; ++i) {
        if (frequency[arr[i]] == 0) {
            cout << arr[i] << " ";
            frequency[arr[i]]++;
        }
    }
    cout << endl;
}

// Function to merge two arrays of same size in descending order
void mergeAndSortDescending(const int arr1[], const int arr2[], int size, int result[]) {
    vector<int> merged;
    merged.insert(merged.end(), arr1, arr1 + size);
    merged.insert(merged.end(), arr2, arr2 + size);

    sort(merged.rbegin(), merged.rend()); // Sorting in descending order

    for (int i = 0; i < size * 2; ++i) {
        result[i] = merged[i];
    }
}

int main() {
    // Helical Matrix
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    cout << "Helical Matrix: ";
    printHelicalMatrix(matrix);
    cout << endl;

    // Frequency of each element in an array
    const int arr[] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    printFrequency(arr, arrSize);

    // Count total number of duplicates in an array
    int duplicates = countDuplicates(arr, arrSize);
    cout << "Total number of duplicates in the array: " << duplicates << endl;

    // Print all unique elements in an array
    printUniqueElements(arr, arrSize);

    // Merge two arrays of same size in descending order
    const int arr1[] = {5, 8, 12};
    const int arr2[] = {3, 7, 10};
    int mergedResult[arrSize * 2];
    mergeAndSortDescending(arr1, arr2, arrSize, mergedResult);
    cout << "Merged Array in Descending Order: ";
    for (int i = 0; i < arrSize * 2; ++i) {
        cout << mergedResult[i] << " ";
    }
    cout << endl;

    return 0;
}
