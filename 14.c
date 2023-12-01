#include <stdio.h>

int main() {
    int arr[10];
    int n ,max, min, sum = 0, odd_sum = 0, even_sum = 0, slargest, ssmallest;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);

    float avg = (float)sum / 10;
    printf("Average: %.2f\n", avg);

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            even_sum += arr[i];
        }
        else {
            odd_sum += arr[i];
        }
    }
    printf("Even sum: %d\n", sum-odd_sum);
    printf("Odd sum: %d\n", odd_sum);

    max = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Max: %d\n", max);

    min = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Min: %d\n", min);

    printf("Reversed elements:");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int copy_array[10];
    for (int i = 0; i < 10; i++) {
        copy_array[i] = arr[i];
    }
    printf("Copy array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", copy_array[i]);
    }
    printf("\n");

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    slargest = arr[8];
    printf("Second largest: %d\n", slargest);

    ssmallest = arr[1];
    printf("Second smallest: %d\n", ssmallest);

    return 0;
}
