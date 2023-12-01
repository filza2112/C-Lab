#include <stdio.h>

int main() {
int i, j, prime, arm, a, b, temp,next,term,t,choice, N, num1, num2, num;

int fib[20];
// Fibonacci series
fib[0] = 0;
fib[1] = 1;

printf("Enter no of terms : ");
scanf("%d", &N);
printf("Enter term number to find: ");
scanf("%d",&term);

for (i = 2; i < N; i++) {
fib[i] = fib[i - 1] + fib[i - 2];
}
printf("Fibonacci series:\n");
for (i = 0; i < N; i++) {
printf("%d ", fib[i]);

if(term==i){
    t=fib[term-1];
}
}
printf("\nRequired term is %d",t);



printf("\n");
// 3: Check if a number is in the Fibonacci series
printf("Enter a number to check if it's in the Fibonacci series: ");
scanf("%d", &num);
int isFibonacci = 0;
for (i = 0; i < 50; i++) {
if (num == fib[i]) {
isFibonacci = 1;
break;
}
}
if (isFibonacci) {
printf("%d is in the Fibonacci series.\n",num);
} 
else {
printf("%d is not in the Fibonacci series.\n",num);
}

// 4: Calculate the HCF of two numbers
printf("Enter two numbers to calculate their HCF: ");
scanf("%d %d", &num1, &num2);
a = num1;
b = num2;
while (b != 0) {
temp = b;
b = a % b;
a = temp;
}
printf("HCF of %d and %d: %d\n", num1, num2, a);

// 5: Check if two numbers are co-prime
printf("Enter two numbers to check if they are co-prime: ");
scanf("%d %d", &num1, &num2);
a = num1;
b = num2;
while (b != 0) {
temp = b;
b = a % b;
a = temp;
}
if (a == 1) {
printf("%d and %d are co-prime.\n", num1, num2);
} 
else {
printf("%d and %d are not co-prime.\n", num1, num2);
}

// 6: Print all prime numbers under 100
printf("Prime numbers under 100:\n");
for (i = 2; i < 100; i++) {
prime = 1;
for (j = 2; j < i; j++) {
if (i % j == 0) {
prime = 0;
break;
}
}

if (prime) {
printf("%d ", i);}
}
printf("\n");
// 7: Print prime numbers between two numbers
printf("Enter two numbers to print prime numbers between them: ");
scanf("%d %d", &num1, &num2);
printf("Prime numbers between %d and %d:\n", num1, num2);
for (i = num1; i <= num2; i++) {
if (i < 2) {
continue;
}
prime = 1;
for (j = 2; j * j <= i; j++) {
if (i % j == 0) {
prime = 0;
break;
}
}
if (prime) {
printf("%d ", i);
}
}
printf("\n");

// 8: Find the next prime number after a given number
printf("Enter a number to find the next prime number after it: ");
scanf("%d", &num);
next = num + 1;

while (1) {
prime = 1;
for (i = 2; i * i <= next; i++) {
if (next % i == 0) {
prime = 0;
break;
}
}
if (prime) {
printf("Next prime number after %d: %d\n", num, next);
break;
}
next++;
}

// 9: Check if a number is an Armstrong number
printf("Enter a number to check if it's an Armstrong number: ");
scanf("%d", &num);
arm = 0;
int sum = 0;
int originalNum = num;
while (originalNum != 0) {
int digit = originalNum % 10;
sum += digit * digit * digit;
originalNum /= 10;
}
if (num == sum) {
arm = 1;
}

if (arm) {
printf("%d is an Armstrong number.\n", num);
} else {
printf("%d is not an Armstrong number.\n", num);
}

// 10: Print all Armstrong numbers under 1000
printf("Armstrong numbers under 1000:\n");
for (i = 1; i < 1000; i++) {
arm = 0;
int sum = 0;
int originalNum = i;
while (originalNum != 0) {
int digit = originalNum % 10;
sum += digit * digit * digit;
originalNum /= 10;
}
if (i == sum) {
arm = 1;
}
if (arm) {
printf("%d ", i);
}
}
printf("\n");

return 0;
}