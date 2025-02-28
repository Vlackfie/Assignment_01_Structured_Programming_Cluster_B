/*Problem: Positive, Negative or Zero
Write a C program that takes a number and determines whether
it's positive, negative, or zero using if-else statements.*/

#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if (a > 0) {
        printf("Positive.\n");
    } else if (a< 0) {
        printf("Negative.\n");
    } else {
        printf("Zero.\n");
    }
    return 0;
}

