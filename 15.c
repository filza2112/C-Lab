#include <stdio.h>

int max(int a[], int s) {
    int m = a[0];
    for (int i = 1; i < s; i++) {
        if (a[i] > m) {
            m = a[i];
        }
    }
    return m;
}

int min(int a[], int s) {
    int m = a[0];
    for (int i = 1; i < s; i++) {
        if (a[i] < m) {
            m = a[i];
        }
    }
    return m;
}

void sort(int a[], int s) {
    for (int i = 0; i < s - 1; i++) {
        int mi = i;
        for (int j = i + 1; j < s; j++) {
            if (a[j] < a[mi]) {
                mi = j;
            }
        }
        int t = a[i];
        a[i] = a[mi];
        a[mi] = t;
    }
}

void rotate(int a[], int s, int n) {
    int t;
    for (int i = 0; i < n; i++) {
        t = a[0];
        for (int j = 0; j < s - 1; j++) {
            a[j] = a[j + 1];
        }
        a[s - 1] = t;
    }
}

int adjacentduplicate(int a[], int s) {
    for (int i = 0; i < s - 1; i++) {
        if (a[i] == a[i + 1]) {
            return a[i];
        }
    }
    return -1;
}

void displayreverse(int a[], int s) {
    for (int i = s - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int countduplicates(int a[], int s) {
    int c = 0;
    for (int i = 0; i < s; i++) {
        for (int j = i + 1; j < s; j++) {
            if (a[i] == a[j]) {
                c++;
                break;
            }
        }
    }
    return c;
}

void printunique(int a[], int s) {
    printf("Unique elements: ");
    for (int i = 0; i < s; i++) {
        int u = 1;
        for (int j = 0; j < s; j++) {
            if (i != j && a[i] == a[j]) {
                u = 0;
                break;
            }
        }
        if (u) {
            printf("%d ", a[i]);
        }
    }
}

void merge(int a1[], int a2[], int s, int m[]) {
    for (int i = 0; i < s; i++) {
        m[i] = a1[i];
    }
    for (int i = 0; i < s; i++) {
        m[i + s] = a2[i];
    }
    sort(m, 2 * s);
}

void countfreq(int a[], int s) {
    printf("Element Frequency\n");
    for (int i = 0; i < s; i++) {
        if (a[i] != -1) {
            int c = 1;
            for (int j = i + 1; j < s; j++) {
                if (a[i] == a[j]) {
                    c++;
                    a[j] = -1; // Mark duplicate elements to avoid recounting
                }
            }
            printf("%d\t%d\n", a[i], c);
        }
    }
}

int main() {
    int a[100], s, n, d, a2[100], m[200];
    printf("Enter the size (up to 100): ");
    scanf("%d", &s);
    printf("Enter %d elements: ", s);
    for (int i = 0; i < s; i++) {
        scanf("%d", &a[i]);
    }

    printf("Max: %d\n", max(a, s));
    printf("Min: %d\n", min(a, s));

    sort(a, s);
    printf("Sorted array: ");
    for (int i = 0; i < s; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Rotate positions: ");
    scanf("%d", &d);
    printf("Direction (L/R): ");
    char dir;
    scanf(" %c", &dir);
    if (dir == 'L' || dir == 'l') {
        rotate(a, s, d);
    }
    printf("Rotated array: ");
    for (int i = 0; i < s; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int ad = adjacentduplicate(a, s);
    if (ad != -1) {
        printf("First adjacent duplicate: %d\n", ad);
    } 
    else {
        printf("No adjacent duplicates found.\n");
    }

    printf("Reverse array: ");
    displayreverse(a, s);

    printf("Total duplicates: %d\n", countduplicates(a, s));
    printunique(a, s);

    printf("Enter the second array: ");
    for (int i = 0; i < s; i++) {
        scanf("%d", &a2[i]);
    }
    merge(a, a2, s, m);
    printf("Merged and sorted array:\n ");
    for (int i = 0; i < 2 * s; i++) {
        printf("%d ", m[i]);
    }
    printf("\n");

    countfreq(a, s * 2);


    return 0;
}
