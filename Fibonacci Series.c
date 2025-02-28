/*11. Problem: Fibonacci Series
Write a C program to generate the Fibonacci series
up to n terms using a for loop.*/

#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
