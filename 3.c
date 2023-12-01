#include<stdio.h>
#include<ctype.h>
int main(){
    int num,num1,num2,num3;

    //positive or negative
    printf("Enter your number: ");
    scanf("%d",&num);
    if(num>0){
        printf("Number is positive");
    }
    else if(num<0){
        printf("Number is negative");
    }
    else{
        printf("Number is 0");
    }

    //Divisible by 5
    printf("\nenter the number to check it's divisiblity by 5: ");
    scanf("%d",&num1);
    if(num1%5==0){
        printf("YES, it,divisible");
    }
    else{
        printf("NOT divisible");
    }

    //Odd or Even

    printf("\nEnter number to check if it's even or odd:");
    scanf("%d",&num2);
    if(num2%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }

    //Even or Odd without using %
    printf("\n Enter your number to check even or odd: ");
    scanf("%d", &num3);
    if ((num & 1) == 0) {
    printf("Even");
    } 
    else {
    printf("Odd");
    }
 
    // Check if the number is a three-digit number
    printf("\nEnter a number: ");
    scanf("%d", &num);
    if (num >= 100 && num <= 999) {
        printf("Three-digit number\n");
    } 
    else {
        printf("Not a three digit number\n");
    }

    // Print the greater of two numbers
    printf("\nEnter two numbers: ");
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if (n1 > n2) {
        printf("Greater number: %d\n", n1);
    } 
    else if (n2 > n1) {
        printf("Greater number: %d\n", n2);
    } 
    else {
        printf("numbers are same: %d\n", n1);
    }

    // Check the roots of a quadratic equation
    printf("\nEnter coefficients (a, b, c) of the quadratic equation: ");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double disc = b * b - 4 * a * c;
    if (disc > 0) {
        printf("Real and distinct roots\n");
    } 
    else if (disc == 0) {
        printf("Real and equal roots\n");
    } 
    else {
        printf("Imaginary roots\n");
    }

    // Check if a year is a leap year
    printf("\nEnter a year: ");
    int year;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } 
    else {
        printf("Not a leap year\n");
    }

    // Find the greatest among three numbers
    printf("\nEnter three numbers: ");
    int n3, n4, n5;
    scanf("%d %d %d", &n3, &n4, &n5);
    if (n3 == n4 && n4 == n5) {
        printf("All three numbers are equal: %d\n", n3);
    } 
    else if (n3 >= n4 && n3 >= n5) {
        printf("Greatest number: %d\n", n3);
    } 
    else if (n4 >= n3 && n4 >= n5) {
        printf("Greatest number: %d\n", n4);
    } 
    else {
        printf("Greatest number: %d\n", n5);
    }

    // Calculate profit or loss percentage
    printf("Enter cost price and selling price: ");
    float cost, selling;
    scanf("%f %f", &cost, &selling);
    if (selling > cost) {
        float profit = selling - cost;
        float profit_percent = (profit / cost) * 100;
        printf("Profit percentage: %.2f%%\n", profit_percent);
    } 
    else if (cost > selling) {
        float loss = cost - selling;
        float loss_percent = (loss / cost) * 100;
        printf("Loss percentage: %.2f%%\n", loss_percent);
    } 
    else {
        printf("No profit, no loss\n");
    }

    // Check if a candidate passed or failed based on marks in 5 subjects
    printf("Enter marks for 5 subjects (out of 100): ");
    int marks[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += marks[i];
    }
    if (total / 5 >= 33) {
        printf("Candidate passed\n");
    } 
    else {
        printf("Candidate failed\n");
    }

    // Check if a character is uppercase, lowercase, digit, or special character
    printf("\nEnter a character: ");
    char ch;
    scanf(" %c", &ch);
    if (isupper(ch)) {
        printf("Uppercase alphabet\n");
    } 
    else if (islower(ch)) {
        printf("Lowercase alphabet\n");
    } 
    else if (isdigit(ch)) {
        printf("Digit\n");
    } 
    else {
        printf("Special character\n");
    }

    // Check if a number is divisible by 3 and 2
    printf("\nEnter a number: ");
    int numDiv;
    scanf("%d", &numDiv);
    if (numDiv % 3 == 0 && (numDiv & 1) == 0) {
        printf("Divisible by 3 and even\n");
    } 
    else {
        printf("Not divisible by 3 and even\n");
    }

    // Check if a number is divisible by 7 or 3
    printf("\nEnter a number: ");
    int numDiv2;
    scanf("%d", &numDiv2);
    if (numDiv2 % 7 == 0 || numDiv2 % 3 == 0) {
        printf("Divisible by 7 or 3\n");
    } 
    else {
        printf("Not divisible by 7 or 3\n");
    }

    // Check if a number is positive, negative, or zero
    printf("\nEnter a number: ");
    int numPosNeg;
    scanf("%d", &numPosNeg);
    if (numPosNeg > 0) {
        printf("Positive number\n");
    } 
    else if (numPosNeg < 0) {
        printf("Negative number\n");
    } 
    else {
        printf("Zero\n");
    }

    // Check if a character is an alphabet (uppercase, lowercase), digit, or special character
    printf("\nEnter a character: ");
    char ch2;
    scanf(" %c", &ch2);
    if (isalpha(ch2)) {
        if (isupper(ch2)) {
            printf("Uppercase alphabet\n");
        } 
        else {
            printf("Lowercase alphabet\n");
        }
    } 
    else if (isdigit(ch2)) {
        printf("Digit\n");
    } 
    else {
        printf("Special character\n");
    }

    // Check if a triangle with given sides is valid
    printf("\nEnter the lengths of the sides of a triangle: ");
    int side1, side2, side3;
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("Valid triangle\n");
    } 
    else {
        printf("Invalid triangle\n");
    }

    // Display the number of days in a given month
    printf("\nEnter a month number: ");
    int month;
    scanf("%d", &month);
    int days;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28;
            break;
        default:
            printf("Invalid month\n");
            return 1;
    }
    printf("Number of days in the month: %d\n", days);

    return 0;
}