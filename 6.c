#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    // sum of first N natural numbers
    int sN = 0;
    for (int i = 1; i <= n; i++) sN += i;
    printf("Sum of first %d natural numbers: %d\n", n, sN);

    // sum of first N even natural numbers
    int sEN = 0;
    for (int i = 2; i <= 2 * n; i += 2) sEN += i;
    printf("Sum of first %d even natural numbers: %d\n", n, sEN);

    // sum of first N odd natural numbers
    int sON = 0;
    for (int i = 1; i <= 2 * n; i += 2) sON += i;
    printf("Sum of first %d odd natural numbers: %d\n", n, sON);

    // sum of squares of first N natural numbers
    int sSq = 0;
    for (int i = 1; i <= n; i++) sSq += i * i;
    printf("Sum of squares: %d\n",sSq);

    // sum of cubes of first N natural numbers
    int sCu = 0;
    for (int i = 1; i <= n; i++) sCu += i * i * i;
    printf("Sum of cubes : %d\n", sCu);

    // factorial of a number
    int fN = 1;
    for (int i = 1; i <= n; i++){
    fN *= i;
    }   
    printf("Factorial of %d: %d\n", n, fN);

    // Count digits in a given number
    int num;
    printf("Enter a number to count it's digits: ");
    scanf("%d", &num);
    int dC = 0;
    while (num != 0) { num /= 10; dC++; }
    printf("Number of digits is: %d\n", dC);

    // number is a Prime number or not
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);
    int p = 1;
    if (num <= 1) p = 0;
    else for (int i = 2; i * i <= num; i++) if (num % i == 0) { p = 0; break; }
    if (p) printf("%d is a prime number.\n", num);
    else printf("%d is not a prime number.\n", num);

    //LCM of two numbers
    int a, b;
    printf("Enter two numbers to find LCM: ");
    scanf("%d %d", &a, &b);
    int m = (a > b) ? a : b;
    while (1) if (m % a == 0 && m % b == 0) { printf("LCM of %d and %d: %d\n", a, b, m); break; } m++;

    // Reverse a number
    printf("Enter a number to reverse: ");
    scanf("%d", &num);
    int r = 0;
    while (num != 0) { r = r * 10 + num % 10; num /= 10; }
    printf("Reverse is: %d\n", r);

    return 0;
}
