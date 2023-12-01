#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(char **s) {
    *s = (char *)malloc(sizeof(char));
    printf("Enter a string: ");
    scanf(" %s", *s);
}

int main() {

    //input variable-length string and store it in an array without memory wastage:
    char *s;
    input(&s);
    printf("Entered value: %s\n", s);
    free(s);

    //avg data values
    int n, *a, sum = 0;
    printf("Enter the number of data values: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter %d data values:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Average : %.2f\n", (float)sum / n);
    free(a);

    //calculate sum
    sum = 0, n = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum: %d\n", sum);
    free(a);

    //text using DMA
    char *t;
    printf("Enter text: ");
    t = (char *)malloc(100 * sizeof(char));
    scanf(" %s", t);
    printf("Entered Value: %s\n", t);
    free(t);

    //sum of 1d array
    sum = 0, n = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nSum of array elements: %d\n", sum);
    free(a);

    //largest element
    int max;
    sum = 0, n = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("Largest element: %d\n", max);
    free(a);

    // Memory leak example
    int *l = (int *)malloc(5 * sizeof(int));
    //dangling pointer
    int *p = (int *)malloc(sizeof(int));
    *p = 5;
    free(p);
    printf("%d\n", *p);

    //memory allocation with error handling
    int size;
    printf("Enter the size in bytes: ");
    scanf("%d", &size);
    a = (int *)malloc(size);
    if (a == NULL) {
        printf("Memory not allocation.\n");
    }
    else {
        printf("Memory allocated.\n");
        free(a);
    }

    //Min and Max
    int min;
    n = 0, max = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    free(a);
    return 0;
}
