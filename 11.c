#include <stdio.h>

//prime
int prime(int N) {
    if (N <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;
}

// next prime number
int find_next_prime(int N) {
    while (1) {
        N++;
        if (prime(N)) {
            return N;
        }
    }
}

//LCM of two numbers
int calc_lcm(int a, int b) {
    int max = (a > b) ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

// HCF of two numbers
int calc_hcf(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// first N prime numbers
void print_n_primes(int N) {
    int num = 2;
    int count = 0;
    while (count < N) {
        if (prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
}

//prime numbers between two numbers
void range(int start, int end) {
    for (int num = start; num <= end; num++) {
        if (prime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

//square of a number
int square(int N) {
    return N * N;
}

//sum of the series
double calc_series_sum(int N) {
    double sum = 0;
    for (int i = 1; i <= N; i++) {
        double term = 1.0;
        for (int j = 1; j <= i; j++) {
            term *= (double)j;
        }
        sum += term / (double)i;
    }
    return sum;
}

//Fibonacci series
void fib(int N) {
    int a = 0, b = 1;
    printf("First %d terms of the Fibonacci series: ", N);
    for (int i = 0; i < N; i++) {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}


int main() {
    int N,n1, n2, num, start_range, end_range;

    printf("Enter two numbers for LCM: ");
    scanf("%d %d", &n1, &n2);
    printf("LCM of %d and %d: %d\n", n1, n2, calc_lcm(n1, n2));

    printf("Enter two numbers for HCF: ");
    scanf("%d %d", &n1, &n2);
    printf("HCF of %d and %d: %d\n", n1, n2, calc_hcf(n1, n2));

    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);
    if (prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    printf("Enter a number to find the next prime number: ");
    scanf("%d", &num);
    printf("Next prime number after %d: %d\n", num, find_next_prime(num));

    printf("Enter N for prime numbers: ");
    scanf("%d", &N);
    print_n_primes(N);

    printf("Enter the start and end numbers for prime numbers : ");
    scanf("%d %d", &start_range, &end_range);
    range(start_range, end_range);

    printf("Enter N for Fibonacci series: ");
    scanf("%d", &N);
    fib(N);

    printf("Enter a number for square: ");
    scanf("%d", &num);
    printf("Square of %d: %d\n", num, square(num));

    printf("Enter N for sum of the series: ");
    scanf("%d", &N);
    printf("Sum of the series: %.2lf\n", calc_series_sum(N));

    return 0;
}
