#include <stdio.h>

int main() {
    int i;

    //Print "MySirG" 5 times

    for (i = 0; i < 5; i++) {
        printf("MySirG ");
    }
    printf("\n");

    //first 10 natural numbers

    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    //first 10 natural numbers in reverse order

    for (i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    //first 10 odd natural numbers

    for (i = 1; i <= 19; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    //first 10 odd natural numbers in reverse order

    for (i = 19; i >= 1; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    //first 10 even natural numbers

    for (i = 2; i <= 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    //first 10 even natural numbers in reverse order

    for (i = 20; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    //squares of the first 10 natural numbers

    for (i = 1; i <= 10; i++) {
        printf("%d ", i * i);
    }
    printf("\n");

    //cubes of the first 10 natural numbers

    for (i = 1; i <= 10; i++) {
        printf("%d ", i * i * i);
    }
    printf("\n");

    // table of 5

    for (i = 1; i <= 10; i++) {
        printf("5 x %d = %d\n", i, 5 * i);
    }

    return 0;
}
