/*12. Problem: Sum of Digits
Write a program that takes an integer as input and calculates
the sum of its digits using a while loop.*/

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits= %d\n", sum);
    return 0;
}
