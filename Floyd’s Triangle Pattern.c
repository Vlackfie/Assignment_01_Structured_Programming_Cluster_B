/*18. Floyd’s Triangle Pattern
Write a C program that prints Floyd’s triangle.*/

#include <stdio.h>
int main(){
    int row, i, j, num = 1;
    scanf("%d", &row);
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}
