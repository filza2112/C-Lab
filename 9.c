#include <stdio.h>
#include <math.h>

int main() {
    int m;
    printf("Enter the month number : ");
    scanf("%d", &m);
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n");
            break;
        case 2:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month\n");
    }
    printf("\n");

    double n1, n2, r;
    char o;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);
    printf("Enter an operator (1.+ 2.- 3.* 4./): ");
    scanf(" %c", &o);
    switch (o) {
        case '1': r = n1 + n2; printf("Result: %.2lf\n", r); break;
        case '2': r = n1 - n2; printf("Result: %.2lf\n", r); break;
        case '3': r = n1 * n2; printf("Result: %.2lf\n", r); break;
        case '4':
            if (n2 != 0) {
                r = n1 / n2;
                printf("Result: %.2lf\n", r);
            } 
            else {
                printf("Division by zero not posssible\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    printf("\n");

    int d;
    printf("Enter the day number (1-7): ");
    scanf("%d", &d);
    switch (d) {
        case 1: printf("Finally Sunday!\n"); break;
        case 2: printf("Work Work Monday!\n"); break;
        case 3: printf("Yeah Tuesday!\n"); break;
        case 4: printf("Wohoo Wednesday!\n"); break;
        case 5: printf("Terrific Thursday!\n"); break;
        case 6: printf("Fun Friday!\n"); break;
        case 7: printf("Party Today! Saturday!\n"); break;
        default: printf("Invalid input\n");
    }
    printf("\n");

    int s1, s2, s3;
    printf("Enter three side lengths of a triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {
        if (s1 == s2 && s2 == s3) {
            printf("Equilateral triangle\n");
        } 
        else if (s1 == s2 || s2 == s3 || s1 == s3) {
            printf("Isosceles triangle\n");
        } 
        else if (s1 * s1 + s2 * s2 == s3 * s3 || s1 * s1 + s3 * s3 == s2 * s2 || s2 * s2 + s3 * s3 == s1 * s1) {
            printf("Right-angled triangle\n");
        } 
        else {
            printf("Scalene triangle\n");
        }
    } 
    else {
        printf("Invalid side lengths\n");
    }
    printf("\n");

    int v;
    printf("Enter a variable (1, 2, or 3): ");
    scanf("%d", &v);
    switch (v) {
        case 1: printf("Good\n"); break;
        case 2: printf("Better\n"); break;
        case 3: printf("Best\n"); break;
        default: printf("Invalid\n");
    }
    printf("\n");

    int y;
    printf("Enter a year: ");
    scanf("%d", &y);
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        printf("%d is a leap year\n", y);
    } else {
        printf("%d is not a leap year\n", y);
    }
    printf("\n");

    int u;
    double b = 0;
    printf("Enter total electricity units: ");
    scanf("%d", &u);
    if (u > 0) {
        if (u <= 50) {
            b = u * 0.50;
        } 
        else if (u <= 150) {
            b = 50 * 0.50 + (u - 50) * 0.75;
        } 
        else if (u <= 250) {
            b = 50 * 0.50 + 100 * 0.75 + (u - 150) * 1.20;
        } 
        else {
            b = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (u - 250) * 1.50;
        }
        b *= 1.20;
        printf("Total electricity bill: Rs. %.2lf\n", b);
    } 
    else {
        printf("Invalid number of units\n");
    }
    printf("\n");

    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    switch (x >= 0) {
        case 1: printf("Negative of %d is %d\n", x, -x); break;
        case 0: printf("Positive of %d is %d\n", x, -x); break;
    }
    printf("\n");

    int e;
    printf("Enter an even number: ");
    scanf("%d", &e);
    if (e % 2 == 0) {
        int n;
        switch (e % 4) {
            case 0: n = e - 1; break;
            case 2: n = e + 1; break;
            default: n = e;
        }
        printf("The nearest odd number is: %d\n", n);
    } 
    else {
        printf("Invalid input\n");
    }
    printf("\n");

    double A, B, C;
    printf("Enter coefficients a, b, c of quadratic equation :\n ");
    scanf("%lf %lf %lf", &A, &B, &C);
    double D = B * B - 4 * A * C;
    if (D > 0) {
        double r1 = (-B + sqrt(D)) / (2 * A);
        double r2 = (-B - sqrt(D)) / (2 * A);
        printf("Roots are real and different. Root1 = %.2lf, Root2 = %.2lf\n", r1, r2);
    } 
    else if (D == 0) {
        double r = -B / (2 * A);
        printf("Roots are real and same.Root = %.2lf\n", r);
    } 
    else {
        printf("Roots are complex.\n");
    }

    return 0;
}


