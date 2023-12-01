#include <stdio.h>

int main() {
    int N, i;

    // "MySirG" N times
    printf("Enter N :");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        printf("MySirG ");
    }
    printf("\n");

    //first N natural numbers
    printf("Enter N: ");
    scanf("%d", &N);
    printf("First %d natural numbers:\n", N);
    for (i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 3: Print the first N natural numbers in reverse order
    printf("Enter N : ");
    scanf("%d", &N);
    printf("First %d natural numbers in reverse order:\n", N);
    for (i = N; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    // 4: Print the first N odd natural numbers
    printf("Enter the value of N for printing odd natural numbers: ");
    scanf("%d", &N);
    printf("First %d odd natural numbers:\n", N);
    for (i = 1; i <= 2 * N - 1; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    // 5: Print the first N odd natural numbers in reverse order
    printf("Enter the value of N for printing odd natural numbers in reverse order: ");
    scanf("%d", &N);
    printf("First %d odd natural numbers in reverse order:\n", N);
    for (i = 2 * N - 1; i >= 1; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    // 6: Print the first N even natural numbers
    printf("Enter the value of N for even natural numbers: ");
    scanf("%d", &N);
    printf("First %d even natural numbers:\n", N);
    for (i = 2; i <= 2 * N; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    // 7: Print the first N even natural numbers in reverse order
    printf("Enter the value of N : ");
    scanf("%d", &N);
    printf("First %d even natural numbers in reverse order:\n", N);
    for (i = 2 * N; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    // 8: Print squares of the first N natural numbers
    printf("Enter the value of N for printing squares: ");
    scanf("%d", &N);
    printf("Squares of the first %d natural numbers:\n", N);
    for (i = 1; i <= N; i++) {
        printf("%d ", i * i);
    }

    printf("\n");

    // 9: Print cubes of the first N natural numbers
    printf("Enter the value of N for printing cubes: ");
    scanf("%d", &N);
    printf("Cubes of the first %d natural numbers:\n", N);
    for (i=1; i<=N; i++) {
        printf("%d ", i * i * i);
    }
    printf("\n");

    // 10: Print a table of N
    printf("Enter the value of N : ");
    scanf("%d", &N);
    printf("Table of %d:\n", N);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N*i);
    }

    return 0;
}
