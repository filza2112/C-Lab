#include <iostream>
using namespace std;

const int MAX_STUDENTS = 5;

void input(int info[MAX_STUDENTS][5]) {
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        cout << "Enter Roll, Age, and Marks of 3 Subjects for Student " << (i + 1) << ": ";
        cin >> info[i][0] >> info[i][1] >> info[i][2] >> info[i][3] >> info[i][4];
    }
}

void displayPercent(const int info[MAX_STUDENTS][5]) {
    cout << "\nPercentage of Each Student:\n";
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        float percent = (info[i][2] + info[i][3] + info[i][4]) / 3.0;
        cout << "Student " << (i + 1) << ": " << percent * 100 << "%\n";
    }
}

void displayHighestMarks(const int info[MAX_STUDENTS][5]) {
    cout << "\nRoll No of Student with Highest Marks in Each Subject:\n";
    for (int subj = 2; subj <= 4; ++subj) {
        int maxMarks = 0, rollNo = -1;

        for (int i = 0; i < MAX_STUDENTS; ++i) {
            if (info[i][subj] > maxMarks) {
                maxMarks = info[i][subj];
                rollNo = info[i][0];
            }
        }

        cout << "Subject " << (subj - 1) << ": Student with Roll No " << rollNo << "\n";
    }
}

void displayHighestPercent(const int info[MAX_STUDENTS][5]) {
    cout << "\nRoll No of Student with Highest Percentage:\n";
    float highestPercent = 0;
    int highestRollNo = -1;

    for (int i = 0; i < MAX_STUDENTS; ++i) {
        float percent = (info[i][2] + info[i][3] + info[i][4]) / 3.0;
        if (percent > highestPercent) {
            highestPercent = percent;
            highestRollNo = info[i][0];
        }
    }

    cout << "Student with Roll No " << highestRollNo << " has the highest percentage: " << highestPercent * 100 << "%\n";
}

int main() {
    int info[MAX_STUDENTS][5]; // Roll, Age, Marks of 3 Subjects

    input(info);
    displayPercent(info);
    displayHighestMarks(info);
    displayHighestPercent(info);

    return 0;
}
