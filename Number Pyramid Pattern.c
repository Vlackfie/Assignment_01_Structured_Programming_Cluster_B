/*19. Number Pyramid Pattern
Write a C program that prints a number pyramid.*/

#include <stdio.h>
int main() {
    int row, i, j;
    scanf("%d", &row);
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

