#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number = 5;
    double result = 1.0 / factorial(number);
    
    printf("Value of 1/5!: %f\n", result);

    return 0;
}