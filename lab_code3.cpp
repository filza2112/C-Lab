#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void insertBegin(int arr[], int& size, int element) {
    if (size < MAX_SIZE) {
        for (int i = size; i > 0; --i)
            arr[i] = arr[i - 1];
        arr[0] = element;
        size++;
    } else
        cout << "Array full. Cannot insert at the beginning.\n";
}

void insertEnd(int arr[], int& size, int element) {
    if (size < MAX_SIZE)
        arr[size++] = element;
    else
        cout << "Array full. Cannot insert at the end.\n";
}

void insertPos(int arr[], int& size, int element, int pos) {
    if (pos >= 0 && pos <= size && size < MAX_SIZE) {
        for (int i = size; i > pos; --i)
            arr[i] = arr[i - 1];
        arr[pos] = element;
        size++;
    } else
        cout << "Invalid position or array full. Cannot insert at the given position.\n";
}

void deleteBegin(int arr[], int& size) {
    if (size > 0) {
        for (int i = 0; i < size - 1; ++i)
            arr[i] = arr[i + 1];
        size--;
    } else
        cout << "Array empty. Cannot delete at the beginning.\n";
}

void deleteEnd(int arr[], int& size) {
    if (size > 0)
        size--;
    else
        cout << "Array empty. Cannot delete at the end.\n";
}

void deletePos(int arr[], int& size, int pos) {
    if (pos >= 0 && pos < size && size > 0) {
        for (int i = pos; i < size - 1; ++i)
            arr[i] = arr[i + 1];
        size--;
    } else
        cout << "Invalid position or array empty. Cannot delete at the given position.\n";
}

void deleteElem(int arr[], int& size, int element) {
    int index = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        for (int i = index; i < size - 1; ++i)
            arr[i] = arr[i + 1];
        size--;
    } else
        cout << "Element not found. Cannot delete.\n";
}

void displayArr(const int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;

    insertBegin(arr, size, 10);
    insertEnd(arr, size, 20);
    insertPos(arr, size, 15, 1);
    displayArr(arr, size);

    deleteBegin(arr, size);
    deleteEnd(arr, size);
    deletePos(arr, size, 0);
    displayArr(arr, size);

    insertBegin(arr, size, 5);
    insertEnd(arr, size, 25);
    insertPos(arr, size, 30, 1);
    displayArr(arr, size);

    deleteElem(arr, size, 20);
    displayArr(arr, size);

    deleteElem(arr, size, 99);

    return 0;
}
