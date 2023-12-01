#include <stdio.h>
#include <string.h>

int max(int* a, int* b) {
    return (*a > *b) ? *a : *b;
}

int strlenght(const char* str) {
    const char* p = str;
    while (*p != '\0') {
        p++;
    }
    return p - str;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapstr(char* str1, char* str2) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

void sort(int* ptr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}


void count(const char* str, int* vowels, int* consonants) {
    *vowels = 0;
    *consonants = 0;
    while (*str) {
        char ch = *str;
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                (*vowels)++;
            } 
            else {
                (*consonants)++;
            }
        }
        str++;
    }
}

int sum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

void printreverse(int* arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void printstrreverse(const char* str) {
    const char* p = str;
    while (*p != '\0') {
        p++;
    }
    p--;
    while (p >= str) {
        printf("%c", *p);
        p--;
    }
    printf("\n");
}

int main() {
    int num1, num2;
    char str1[100], str2[100];
    int array[] = {4, 1, 8, 3, 6, 7};
    char inputstr[100];
    int vowels, consonants;

    printf("Enter num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping: num1=%d, num2=%d\n", num1, num2);

    swap(&num1, &num2);
    printf("After swapping: num1=%d, num2=%d\n", num1, num2);

    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);
    printf("Before swapping: str1=%s, str2=%s\n", str1, str2);
    swapstr(str1, str2);
    printf("After swapping: str1=%s, str2=%s\n", str1, str2);

    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int maximum = max(&num1, &num2);
    printf("Maximum number: %d\n", maximum);

    printf("Enter a string: ");
    scanf("%s", inputstr);
    int length = strlen(inputstr);
    printf("Length of the string: %d\n", length);

    printf("Enter a string: ");
    scanf("%s", inputstr);
    count(inputstr, &vowels, &consonants);
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);

    int sumarrayresult = sum(array, size);
    printf("Sum of array elements: %d\n", sumarrayresult);

    printf("Array in reverse order: ");
    printreverse(array, size);

    printf("Enter a string: ");
    scanf("%s", inputstr);
    printf("String in reverse: ");
    printstrreverse(inputstr);

    return 0;
}
