#include <stdio.h>

int main() {
    int rows,i, j;

    // Pattern 1
    printf("\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Pattern 2
    printf("\n");
    rows = 5;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Pattern 3
    printf("\n");
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Pattern 4
    printf("\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = 5; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }

    // Pattern 5
    printf("\n");
    rows = 5;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Pattern 6
    printf("\n");
    rows = 5;
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Pattern 7
    printf("\n");
    rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            printf("*");
        }
        for (int k = 0; k < 2 * i; k++) {
            printf(" ");
        }
        for (int l = 0; l < rows - i; l++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
