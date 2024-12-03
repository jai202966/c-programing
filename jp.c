#include <stdio.h>
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; // Base case: 0! = 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long result = factorial(number);
        printf("Factorial of %d = %llu\n", number, result);
    }
return 0;
}
