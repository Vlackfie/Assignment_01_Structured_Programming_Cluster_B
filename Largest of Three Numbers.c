/* Write a C program to find the largest of three numbers
using nested if-else conditions */

#include <stdio.h>
int main() {
int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
        if (a > b && a > c) {
        printf("%d is the Largest", a);
        }
        else if (b > a && b > c){
        printf("%d is the Largest", b);
        }
    else {
    printf("%d is the Largest", c);
        }
return 0;
}
