#include <stdio.h>
#include <string.h>

struct employee {
    int id;
    char name[100];
    float salary;
};

struct time {
    int hours;
    int minutes;
    int seconds;
};

struct student {
    int rollNo;
    char name[50];
};


struct time diff(struct time t1, struct time t2) {
    struct time difference;
    int time1Seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int time2Seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int secondsDifference = time2Seconds - time1Seconds;
    if (secondsDifference < 0) {
        secondsDifference = -secondsDifference;
    }
    difference.hours = secondsDifference / 3600;
    difference.minutes = (secondsDifference % 3600) / 60;
    difference.seconds = (secondsDifference % 3600) % 60;
    return difference;
}

struct marks {
    int rollNo;
    char name[50];
    float  chem_marks;
    float  math_marks;
    float  phy_marks;
};

void data(struct employee* emp) {
    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);
    printf("Enter Employee Name: ");
    scanf(" %s", emp->name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp->salary);
}

void displayEmployee(struct employee emp) {
    printf("  %-4d   %-20s   %-10.2f  \n", emp.id, emp.name, emp.salary);
}

struct employee findHighestSalaryEmployee(const struct employee employees[10]) {
    struct employee highestSalaryEmployee = employees[0];
    for (int i = 1; i < 10; i++) {
        if (employees[i].salary > highestSalaryEmployee.salary) {
            highestSalaryEmployee = employees[i];
        }
    }
    return highestSalaryEmployee;
}

void sortEmployeesBySalary(struct employee employees[10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (employees[i].salary > employees[j].salary) {
                struct employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
}

void sortEmployeesByName(struct employee employees[10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (strcmp(employees[i].name, employees[j].name) > 0) {
                struct employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
}

int main() {
    struct employee employees[10];

    printf("Enter data for 10 employees:\n");
    for (int i = 0; i < 10; i++) {
        printf("Employee %d:\n", i + 1);
        data(&employees[i]);
    }

    printf("\n Employee data:\n");
    printf("  %-4s   %-20s   %-10s  \n", "ID", "Name", "Salary");
 
    for (int i = 0; i < 10; ++i) {
        displayEmployee(employees[i]);
    }
    printf("\n");

    struct employee highestSalaryEmployee = findHighestSalaryEmployee(employees);
    printf("\nEmployee with the highest salary:\n");
    printf("  %-4s   %-20s   %-10s  \n", "ID", "Name", "Salary");
 
    displayEmployee(highestSalaryEmployee);
    printf("\n");

    sortEmployeesBySalary(employees);
    printf("\nEmployees sorted by salary:\n");
    printf("  %-4s   %-20s   %-10s  \n", "ID", "Name", "Salary");
 
    for (int i = 0; i < 10; ++i) {
        displayEmployee(employees[i]);
    }
    printf("\n");

    sortEmployeesByName(employees);
    printf("\nEmployees sorted by name:\n");
    printf("  %-4s   %-20s   %-10s  \n", "ID", "Name", "Salary");
 
    for (int i = 0; i < 10; ++i) {
        displayEmployee(employees[i]);
    }
    printf("\n");

    struct time startTime, endTime, difference;

    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);
    difference = diff(startTime, endTime);
    printf("Time difference: %d hours, %d minutes, %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    struct student students[10];
    printf("Enter data for 10 students:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Enter data for student %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
    }
    printf("\nStudent Information:\n");
    printf("  %-9s   %-20s  \n", "Roll No", "Name");
    for (int i = 0; i < 10; ++i) {
        printf("  %-9d   %-20s  \n", students[i].rollNo, students[i].name);
    }

    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter data for %d students:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Enter data for student %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
    }
    printf("\nStudent Information:\n");
    printf("  %-9s   %-20s  \n", "Roll No", "Name");
    for (int i = 0; i < n; ++i) {
        printf("  %-9d   %-20s  \n", students[i].rollNo, students[i].name);
    }

    struct marks studentMarks[5];
    printf("Enter marks for 5 students in Chemistry, Mathematics, and Physics (out of 100):\n");
    for (int i = 0; i < 5; ++i) {
        printf("Enter data for student %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &studentMarks[i].rollNo);
        printf("Enter Name: ");
        scanf("%s", studentMarks[i].name);

        printf("Enter Chemistry Marks: ");
        scanf("%f", &studentMarks[i]. chem_marks);
        printf("Enter Mathematics Marks: ");
        scanf("%f", &studentMarks[i]. math_marks);
        printf("Enter Physics Marks: ");
        scanf("%f", &studentMarks[i]. phy_marks);
    }
    printf("\nStudent Percentage:\n");
    printf("  %-9s   %-20s   %-10s  \n", "Roll No", "Name", "Percentage");
    for (int i = 0; i < 5; ++i) {
        float totalMarks = studentMarks[i]. chem_marks + studentMarks[i]. math_marks + studentMarks[i]. phy_marks;
        float percentage = (totalMarks / 300) * 100;
        printf("  %-9d   %-20s   %-10f  \n", studentMarks[i].rollNo, studentMarks[i].name, percentage);
    }

    return 0;
}
