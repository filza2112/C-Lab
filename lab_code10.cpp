#include <bits/stdc++.h>

using namespace std;

using CompNum = complex<double>;
using CompVec = vector<CompNum>;

CompVec parseComplexNumbers(const string& input) {
    istringstream iss(input);
    CompVec complexNumbers;

    while (!iss.eof()) {
        string complexPart;
        getline(iss, complexPart, ',');

        CompNum c;
        istringstream complexStream(complexPart);
        complexStream >> c;
        complexNumbers.push_back(c);
    }

    return complexNumbers;
}

void performOperation(CompVec& numbers, int choice) {
    CompNum result;

    switch (choice) {
        case 1:
            result = numbers[0];
            for (size_t i = 1; i < numbers.size(); ++i) result += numbers[i];
            cout << "Sum: " << result << endl;
            break;
        case 2:
            result = numbers[0];
            for (size_t i = 1; i < numbers.size(); ++i) result -= numbers[i];
            cout << "Difference: " << result << endl;
            break;
        case 3:
            result = numbers[0];
            for (size_t i = 1; i < numbers.size(); ++i) result *= numbers[i];
            cout << "Product: " << result << endl;
            break;
        case 4:
            result = numbers[0];
            for (size_t i = 1; i < numbers.size(); ++i) {
                if (numbers[i] != CompNum(0.0, 0.0)) result /= numbers[i];
                else {
                    cout << "Error: Division by zero.\n";
                    return;
                }
            }
            cout << "Quotient: " << result << endl;
            break;
        default:
            cout << "Invalid choice.\n";
            return;
    }
}

int main() {
    cout << "Enter complex numbers in the format 'a + bi', separate multiple complex numbers with commas:\n";

    string input;
    getline(cin, input);

    CompVec complexNumbers = parseComplexNumbers(input);

    if (complexNumbers.size() < 2) {
        cout << "Please enter at least two complex numbers for operations.\n";
        return 1;
    }

    cout << "Operations:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";

    int choice;
    cin >> choice;

    performOperation(complexNumbers, choice);

    return 0;
}
