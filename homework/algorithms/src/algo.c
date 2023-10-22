#include "algo.h"
#include <stdio.h>
#include <math.h>

long fibonacci(const int n)
{
    if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }
    else if (n == 3) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }

    
 
}

int reverse(const int n)
{
    reversenum = 0, remainder;
    printf("Enter the integer you want reversed: ");
    scanf("&d", &n);
    while (n != 0) {
        remainder = n % 10;
        reversenum = reversenum * 10 + remainder;
        n /= 10;
    }
    printf("The reversed number is: = %d", reversenum);
    return 0;
}

long long prime_factor(long long n)
{
    long long LPrime = -1;

    if (n % 2 == 0) {
        LPrime = 2;
        while (n % == 0) {
            n = n / 2;
        }
    }
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            LPrime = i;
            n = n / i;
        }
    }
    if (n > 2) {
        LPrime = n;
    }
    return LPrime;

    
}

int prime_sum(const int n)
{
    int i, j;
    for (i = 1; i <= 1000; i++) {
        if (i % j == 0) {
            break;
        }

    }
    if (i == j) {
        sum = i + j;
    }
}
