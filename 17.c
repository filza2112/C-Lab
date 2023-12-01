#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countvowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    return count;
}

int isvalidip(char ip[]) {
    char *token = strtok(ip, ".");
    int count = 0;
    while (token != NULL) {
        int num = atoi(token);
        if (num < 0 || num > 255) {
            return 0;
        }
        count++;
        token = strtok(NULL, ".");
    }
    return (count == 4);
}


int ispalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int mindistance(char *s[], char word1[], char word2[], int n) {
    int mindist = n;
    int posword1 = -1, posword2 = -1;
    for (int i = 0; i < n; i++) {
        if (strcmp(s[i], word1) == 0) {
            posword1 = i;
        } 
        else if (strcmp(s[i], word2) == 0) {
            posword2 = i;
        }
        if (posword1 != -1 && posword2 != -1) {
            int dist = abs(posword1 - posword2);
            if (dist < mindist) {
                mindist = dist;
            }
        }
    }
    return mindist;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int auth(char username[], char password[]) {
    char validusername[] = "filza";
    char validpassword[] = "filza2112";
    if (strcmp(username, validusername) == 0 && strcmp(password, validpassword) == 0) {
        return 1;
    } 
    else {
        return 0;
    }
}

int main() {
    char arr[5][50];
    for (int i = 0; i < 5; i++) {
        printf("Enter string %d: ", i + 1);
        gets(arr[i]);
    }
    printf("\nNumber of vowels in each string:\n");
    for (int i = 0; i < 5; i++) {
        printf("String %d: %d vowels\n", i + 1, countvowels(arr[i]));
    }
    printf("\n");

    char cities[10][50];
    for (int i = 0; i < 10; i++) {
        printf("Enter city name %d: ", i + 1);
        gets(cities[i]);
    }
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (strcmp(cities[i], cities[j]) > 0) {
                char temp[50];
                strcpy(temp, cities[i]);
                strcpy(cities[i], cities[j]);
                strcpy(cities[j], temp);
            }
        }
    }
    printf("\nSorted city names:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", cities[i]);
    }
    printf("\n");

    printf("Enter 3 strings:\n");
    for (int i = 0; i < 3; i++) {
        printf("String %d: ", i + 1);
        scanf("%s", arr[i]);
    }
    printf("\n2D Array of Strings:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", arr[i]);
    }
    printf("\n");

    char search[50];
    printf("Enter 5 strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("String %d: ", i + 1);
        gets(arr[i]);
    }
    printf("Enter string to search: ");
    gets(search);
    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (strcmp(arr[i], search) == 0) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("String found in the list.\n");
    } 
    else {
        printf("not found.\n");
    }

    char emails[5][50];
    printf("Enter 5 email addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("Email %d: ", i + 1);
        gets(emails[i]);
        if (strchr(emails[i], '@') == NULL) {
            printf("INvalid mail %s\n", emails[i]);
        }
    }
    printf("\n");

    printf("Enter 5 strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("String %d: ", i + 1);
        gets(arr[i]);
    }
    printf("\nPalindrome strings:\n");
    for (int i = 0; i < 5; i++) {
        if (ispalindrome(arr[i])) {
            printf("%s\n", arr[i]);
        }
    }
    printf("\n");

    char ips[3][20];
    printf("Enter 3 IP addresses:\n");
    for (int i = 0; i < 3; i++) {
        printf("IP %d: ", i + 1);
        gets(ips[i]);
        if (!isvalidip(ips[i])) {
            printf("Invalid IP address: %s\n", ips[i]);
        }
    }
    printf("\n");

    char *words[] = {"here", "it", "goes", "again", "hey"};
    char word1[20], word2[20];
    printf("Enter two words: ");
    scanf("%s %s", word1, word2);
    int distance = mindistance(words, word1, word2, 5);
    printf("Minimum distance between '%s' and '%s' is: %d\n", word1, word2, distance);

    char un[3][20] = {"user1", "user2", "user3"};
    char iu[20];
    int n;
    printf("Enter your username: ");
    gets(iu);
    int vu = 0;
    for (int i = 0; i < 3; i++) {
        if (strcmp(un[i], iu) == 0) {
            vu = 1;
            break;
        }
    }
    if (vu) {
        printf("Enter a number to calculate its factorial: ");
        scanf("%d", &n);
        printf("Factorial of %d is: %d\n", n, factorial(n));
    } 
    else {
        printf("Error: Invalid username.\n");
    }

    char u[20], p[20];
    int ch;
    while (ch != 2) {
        printf("\nMenu:\n");
        printf("1. Login\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            printf("Enter username: ");
            scanf("%s", u);
            printf("Enter password: ");
            scanf("%s", p);
            if (auth(u, p)) {
                printf("Welcome, %s!\n", u);
            } 
            else {
                printf("Authentication failed.\n");
            }
            break;
        case 2:
            printf("Exiting......\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
