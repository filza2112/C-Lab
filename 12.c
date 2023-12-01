#include <stdio.h>

//first N natural numbers
void print(int N, int yea) {
    if (yea <= N) {
        printf("%d ", yea);
        print(N, yea + 1);
    }
}

//reverse order
void reverse(int N) {
    if (N > 0) {
        printf("%d ", N);
        reverse(N - 1);
    }
}

// even natural numbers
void even(int N, int yea) {
    if (yea <= N) {
        printf("%d ", 2 * yea);
        even(N, yea + 1);
    }
}


//odd natural numbers
void odd(int N, int yea) {
    if (yea <= N) {
        printf("%d ", 2 * yea - 1);
        odd(N, yea + 1);
    }
}


void even_rev(int N) {
    if (N > 0) {
        printf("%d ", 2 * N);
        even_rev(N - 1);
    }
}


void odd_rev(int N) {
    if (N > 0) {
        printf("%d ", 2 * N - 1);
        odd_rev(N - 1);
    }
}

// square
void print_squares(int N, int yea) {
    if (yea <= N) {
        printf("%d ", yea * yea);
        print_squares(N, yea + 1);
    }
}

// decimal to binary
void print_binary(int decimal) {
    if (decimal > 0) {
        print_binary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

// decimal to octal
void print_octal(int decimal) {
    if (decimal > 0) {
        print_octal(decimal / 8);
        printf("%d", decimal % 8);
    }
}

//reverse
void print_reverse(int num) {
    if (num == 0) {
        return;
    }
    printf("%d", num % 10);
    print_reverse(num / 10);
}

int main() {
    int N, decimal_number;

    printf("Enter N : ");
    scanf("%d", &N);
    printf("First %d natural numbers: ", N);
    print(N, 1);
    printf("\n");
    printf("natural numbers in reverse order: ");
    reverse(N);
    printf("\n");

    printf("Enter N for odd natural numbers: ");
    scanf("%d", &N);
    printf("First %d odd natural numbers: ", N);
    odd(N, 1);
    printf("\n");
    printf("odd natural numbers in reverse order: ");
    odd_rev(N);
    printf("\n");

    printf("Enter N for even natural numbers: ");
    scanf("%d", &N);
    printf("First %d even natural numbers: ", N);
    even(N, 1);
    printf("\n");
    printf("even natural numbers in reverse order: ");
    even_rev(N);
    printf("\n");

    printf("Enter N for squares of natural numbers: ");
    scanf("%d", &N);
    printf("Squares of first %d natural numbers: ", N);
    print_squares(N, 1);
    printf("\n");

    printf("Enter a decimal number to convert to binary: ");
    scanf("%d", &decimal_number);
    printf("Binary: ");
    print_binary(decimal_number);
    printf("\n");

    printf("Enter a decimal number to convert to octal: ");
    scanf("%d", &decimal_number);
    printf("Octal: ");
    print_octal(decimal_number);
    printf("\n");

    printf("Enter a number for reverse: ");
    scanf("%d", &decimal_number);
    printf("Reverse: ");
    print_reverse(decimal_number);

    return 0;
}
