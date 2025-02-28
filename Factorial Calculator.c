/*Problem: Factorial Calculator
Write a program to calculate the factorial
of a number using a while loop.*/

#include <stdio.h>
int main() {
    int a, factorial = 1;
    scanf("%d", &a);
    while (a > 0) {
        factorial *= a;
        a--;
    }
    printf("%d\n", factorial);
    return 0;
}
