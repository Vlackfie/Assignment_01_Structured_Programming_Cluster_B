/*a. Write a program to create a simple calculator using the switch-case
statement. The program should perform addition, subtraction, multiplication, and
division based on user input*/

#include <stdio.h>
int main() {
    double num1, num2;
    char operator;
    while (scanf("%lf %lf %c", &num1, &num2, &operator) == 3) {
        switch(operator) {
            case '+':
                printf("%.2lf\n", num1 + num2);
                break;
            case '-':
                printf("%.2lf\n", num1 - num2);
                break;
            case '*':
                printf("%.2lf\n", num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    printf("%.2lf\n", num1 / num2);
                else
                    printf("Error: Division by zero!\n");
                break;
            default:
                printf("Invalid operator!\n");
        }
    }

    return 0;
}
