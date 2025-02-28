/*Problem: Prime Number Checker
Write a C program to check whether a given number is
prime or not using a for loop and conditional statements*/

#include <stdio.h>
int main() {
    int n, i, Prime = 1;
    scanf("%d", &n);
    for(i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            Prime = 0;
            break;
        }
    }
    if (Prime && n > 1) {
        printf("Prime Number.\n");
    } else {
        printf("Not a Prime Number.\n");
    }
    return 0;
}
