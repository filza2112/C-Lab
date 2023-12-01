#include <iostream>

int len(const char *s) {
    int l = 0;
    while (s[l] != '\0') {
        l++;
    }
    return l;
}

void rev(char *s) {
    int start = 0, end = len(s) - 1;
    while (start < end) {
        char t = s[start];
        s[start] = s[end];
        s[end] = t;
        start++;
        end--;
    }
}

int cmp(const char *s1, const char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            return 0;
        }
        s1++;
        s2++;
    }
    return (*s1 == '\0' && *s2 == '\0');
}

void cat(char *d, const char *s) {
    int dl = len(d);
    int i = 0;
    while (s[i] != '\0') {
        d[dl + i] = s[i];
        i++;
    }
    d[dl + i] = '\0';
}

void copy(char *d, const char *s) {
    int i = 0;
    while (s[i] != '\0') {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
}

int pal(const char *s) {
    int start = 0, end = len(s) - 1;
    while (start < end) {
        if (s[start] != s[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int sub(const char *s, const char *ss) {
    int i, j;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = 0; ss[j] != '\0'; j++) {
            if (s[i + j] != ss[j]) {
                break;
            }
        }
        if (ss[j] == '\0') {
            return i;
        }
    }
    return -1;
}

int main() {
    char s1[100], s2[100];
    int c, r;
    do {
        printf("\nString Operations Menu:\n");
        printf("1. Length\n");
        printf("2. Reverse\n");
        printf("3. Compare\n");
        printf("4. Concatenate\n");
        printf("5. Copy\n");
        printf("6. Palindrome\n");
        printf("7. Substring\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &c);
        switch (c) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", s1);
                printf("Length: %d\n", len(s1));
                break;
            case 2:
                printf("Enter a string: ");
                scanf("%s", s1);
                rev(s1);
                printf("Reversed string: %s\n", s1);
                break;
            case 3:
                printf("Enter first string: ");
                scanf("%s", s1);
                printf("Enter second string: ");
                scanf("%s", s2);
                r = cmp(s1, s2);
                if (r)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;
            case 4:
                printf("Enter destination string: ");
                scanf("%s", s1);
                printf("Enter source string: ");
                scanf("%s", s2);
                cat(s1, s2);
                printf("Concatenated string: %s\n", s1);
                break;
            case 5:
                printf("Enter destination string: ");
                scanf("%s", s1);
                printf("Enter source string: ");
                scanf("%s", s2);
                copy(s1, s2);
                printf("Copied string: %s\n", s1);
                break;
            case 6:
                printf("Enter a string: ");
                scanf("%s", s1);
                r = pal(s1);
                if (r)
                    printf("Palindrome\n");
                else
                    printf("Not a palindrome\n");
                break;
            case 7:
                printf("Enter main string: ");
                scanf("%s", s1);
                printf("Enter substring to find: ");
                scanf("%s", s2);
                r = sub(s1, s2);
                if (r != -1)
                    printf("Substring found at position %d\n", r);
                else
                    printf("Substring not found\n");
                break;
            case 8:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } 
    while (c != 8);
    return 0;
}
