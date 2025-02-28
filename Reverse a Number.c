/*14. Problem: Reverse a Number
Write a C program to reverse a given integer using a while loop.*/

#include <stdio.h>
int main() {
    int a, r = 0;
    scanf("%d", &a);
    while (a != 0) {
        r = r * 10 + a % 10;
        a /= 10;
    }
    printf("Reversed number: %d\n", r);
    return 0;
}
