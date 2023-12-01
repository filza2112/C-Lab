#include <stdio.h>

//sum of the first N natural numbers
int sum(int N) {
    if (N == 1) {
        return 1;
    }
    else {
        return N + sum(N - 1);
    }
}

//sum of the first N even natural numbers
int even(int N) {
    if (N == 1) {
        return 2;
    } 
    else {
        return (2 * N) + even(N - 1);
    }
}

//sum of the first N odd natural numbers
int odd(int N) {
    if (N == 1) {
        return 1;
    }
    else {
        return (2 * N - 1) + odd(N - 1);
    }
}


// sum of squares of the first N natural numbers
int square(int N) {
    if (N == 1) {
        return 1;
    }
    else {
        return N * N + square(N - 1);
    }
}

//factorial
int factorial(int N) {
    if (N == 0 || N == 1) {
        return 1;
    }
    else {
        return N * factorial(N - 1);
    }
}

//hcf
int hcf(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return hcf(b, a % b);
    }
}


// the sum of digits of a given number
int sum_digits(int N) {
    if (N == 0) {
        return 0;
    }
    else {
        return (N % 10) + sum_digits(N / 10);
    }
}

//power of a number
int power(int b, int exp) {
    if (exp == 0) {
        return 1;
    }
    else {
        return b * power(b, exp - 1);
    }
}

//count digits
int count_digits(int N) {
    if (N == 0) {
        return 0;
    } 
    else {
        return 1 + count_digits(N / 10);
    }
}

//Fibonacci series
void fibonacci(int N, int a, int b, int count) {
    if (count < N) {
        printf("%d ", a);
        fibonacci(N, b, a + b, count + 1);
    }
}


int main() {
    int N, n1, n2, number, b, x;

    printf("Enter N for sum of natural numbers: ");
    scanf("%d", &N);
    printf("Sum of first %d natural numbers: %d\n", N, sum(N));

    printf("Enter N for sum of odd natural numbers: ");
    scanf("%d", &N);
    printf("Sum of first %d odd natural numbers: %d\n", N, odd(N));

    printf("Enter N for sum of even natural numbers: ");
    scanf("%d", &N);
    printf("Sum of first %d even natural numbers: %d\n", N, even(N));

    printf("Enter N for sum of squares of natural numbers: ");
    scanf("%d", &N);
    printf("Sum of squares of natural numbers: %d\n", square(N));

    printf("Enter a number to calculate the sum: ");
    scanf("%d", &number);
    printf("Sum of digits of %d: %d\n", number, sum_digits(number));

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n1);
    printf("Factorial of %d: %d\n", n1, factorial(n1));

    printf("Enter two numbers to calculate their HCF: ");
    scanf("%d %d", &n1, &n2);
    printf("HCF of %d and %d: %d\n", n1, n2, hcf(n1, n2));

    printf("Enter N for Fibonacci series: ");
    scanf("%d", &N);
    printf("Fibonacci series: ");
    fibonacci(N, 0, 1, 0);
    printf("\n");

    printf("Enter a number to count digits: ");
    scanf("%d", &number);
    printf("Number of digits in %d: %d\n", number, count_digits(number));

    printf("Enter base to find power of a number: ");
    scanf("%d", &b);
    printf("Enter an exponent to finf power: ");
    scanf("%d", &x);
    printf("%d^%d: %d\n", b, x, power(b, x));

    return 0;
}
