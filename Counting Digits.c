/*Problem: Counting Digits
Write a program to count the number of digits in an
integer using a while loop.*/

#include <stdio.h>
int main() {
    int a, b = 0;
    scanf("%d", &a);
    while (a != 0) {
        a /= 10;
        b++;
    }
    printf("Number of digits = %d\n", b);
    return 0;
}
