#include <stdio.h>

int main() {
    int inputNum, num2, threeDigitNum, numA, numB, numC, userInput;
    char character;
    float floatingNum;
    double doubleNum;

    // Unit digit of a given number
    printf("Enter a number: ");
    scanf("%d", &inputNum);
    int unitDigit = inputNum % 10;
    printf("Unit digit: %d\n", unitDigit);

    // Number without its last digit
    num2 = inputNum / 10;
    printf("\nNumber without the last digit: %d\n", num2);

    // Swap values of two integers
    printf("Enter two integers to swap: ");
    scanf("%d %d", &numA, &numB);
    numC = numA;
    numA = numB;
    numB = numC;
    printf("Swapped values: a = %d, b = %d\n", numA, numB);

    // Swap values of two int variables without using a third variable
    printf("Enter two integers to swap without a third variable: ");
    scanf("%d %d", &numA, &numB);
    numA = numA + numB;
    numB = numA - numB;
    numA = numA - numB;
    printf("Swapped values without a third variable: a = %d, b = %d\n", numA, numB);

    // Input a three-digit number and display the sum of the digits
    printf("Enter a three-digit number: ");
    scanf("%d", &threeDigitNum);
    int sumOfDigits = (threeDigitNum%10) + ((threeDigitNum/10) % 10) + (threeDigitNum/100);
    printf("Sum of the digits: %d\n", sumOfDigits);

    // Take a character as input and display its ASCII code
    printf("Enter a character: ");
    scanf(" %c", &character);
    printf("ASCII code of '%c' is %d\n", character, character);

    // Find the position of the first 1 in LSB
    printf("Enter a number: ");
    scanf("%d", &inputNum);
    int bitPosition = 0;
    while (!(inputNum & 1)) {
        inputNum >>= 1;
        bitPosition++;
    }
    printf("Position of the first 1 in LSB: %d\n", bitPosition);

    // Check whether the given number is even or odd using bitwise operator
    printf("Enter a number: ");
    scanf("%d", &inputNum);
    if (inputNum & 1) {
        printf("%d is odd\n", inputNum);
    } 
    else {
        printf("%d is even\n", inputNum);
    }

    // Print the size of int, float, char, and double variables
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of double: %lu bytes\n", sizeof(double));

    // Make the last digit of a number stored in a variable as zero
    printf("Enter a number: ");
    scanf("%d", &inputNum);
    inputNum = (inputNum / 10) * 10;
    printf("Number with last digit as zero: %d\n", inputNum);

    // Input a number and a digit, append the digit to the number
    printf("Enter a number: ");
    scanf("%d", &inputNum);
    printf("Enter a digit to append: ");
    scanf("%d", &userInput);
    inputNum = (inputNum * 10) + userInput;
    printf("Resulting number: %d\n", inputNum);

    // Convert INR to USD
    float inrAmount, usdAmount;
    printf("Enter an amount in INR: ");
    scanf("%f", &inrAmount);
    usdAmount = inrAmount / 76.23;
    printf("Equivalent amount in USD: %.2f\n", usdAmount);

    // Rotate the digits of a three-digit number to the right
    printf("Enter a three-digit number: ");
    scanf("%d", &threeDigitNum);
    int lastDigit = threeDigitNum % 10;
    threeDigitNum = threeDigitNum / 10 + (lastDigit * 100);
    printf("Rotated number: %d\n", threeDigitNum);

    return 0;
}
