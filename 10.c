#include <stdio.h>

//first N natural numbers
void NatNumbers(int N) {
    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

//even or odd
int Even(int n) {
    return (n % 2 == 0) ? 1 : 0;
}

//calculate the area of a circle
double Area(double r) {
    return 3.14 * r * r;
}

// calculate simple interest
double Interest(double p, double rate, double time) {
    return (p * rate * time) / 100;
}


//first N odd natural numbers
void OddNumbers(int N) {
    for (int i = 1; i <= N; i++) {
        printf("%d ", 2 * i - 1);
    }
    printf("\n");
}

//factorial of a number
int orial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// prime factors
void PrimeFactors(int number) {
    int divisor = 2;
    while (number > 1) {
        if (number % divisor == 0) {
            printf("%d ", divisor);
            number /= divisor;
        } 
        else {
            divisor++;
        }
    }
    printf("\n");
}


//number of combinations (n choose 1)
int Comb(int n, int r) {
    int num = orial(n);
    int den = orial(r) * orial(n - r);
    return num / den;
}

//number of arrangements (n permute r)
int Arrangements(int n, int r) {
    return orial(n) / orial(n - r);
}

//number have a given digit or not
int count(int number, int digit) {
    while (number > 0) {
        if (number % 10 == digit) {
            return 1;
        }
        number /= 10;
    }
    return 0;
}

int main() {
    double radius, principal, rate, time;
    int comb, arrN, co, arrR,N, num, factNum, digit, check, primefact;

    printf("Enter the radius: ");
    scanf("%lf", &radius);
    printf("Area of a circle with radius %.2lf: %.2lf\n", radius, Area(radius));

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter the time period (in years): ");
    scanf("%lf", &time);
    printf("Simple interest = %.2lf\n",Interest(principal, rate, time));

    printf("Enter N : ");
    scanf("%d", &N);
    printf("First %d natural numbers: ", N);
    NatNumbers(N);

    printf("First %d odd natural numbers: ", N);
    OddNumbers(N);

    printf("Enter a number to check if even or odd: ");
    scanf("%d", &num);
    printf("%d is %s\n", num, Even(num) ? "Even" : "Odd");

    printf("Enter a number for factorial: ");
    scanf("%d", &factNum);
    printf("Factorial of %d: %d\n", factNum, orial(factNum));

    printf("Enter n and r for combinations: ");
    scanf("%d %d", &comb, &co);
    printf("Number of combinations of %d items chosen one at a time: %d\n",
           comb, Comb(comb, co));

    printf("Enter n and r for arrangement: ");
    scanf("%d %d", &arrN, &arrR);
    printf("Number of arrangements of %d items chosen %d at a time: %d\n",
           arrN, arrN, Arrangements(arrN, arrR));

    printf("Enter a number to find its prime factors: ");
    scanf("%d", &primefact);
    printf("Prime factors of %d: ", primefact);
    PrimeFactors(primefact);

    printf("Enter a number to check for a particular digit: ");
    scanf("%d", &digit);
    printf("Enter a digit to check in the number: ");
    scanf("%d", &check);
    printf("%d  %s contain the digit %d : \n",digit,count(digit, check) ? "does" : "doesn't", check);

    return 0;
}
