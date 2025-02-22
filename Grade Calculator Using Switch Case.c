/*Write a program that takes a score as input and assigns
a grade (A, B, C, D, F) using the switch-case statement.*/

#include <stdio.h>
int main() {
    int score;
    char grade[3];
        printf("Enter your score (0-100): ");
        scanf("%d", &score);
    if (score < 0 || score > 100){
        printf("Invalid score! Please enter a number between 0 and 100.\n");
        } //range
    else {
        switch (score / 5) {
            case 20: // for scores of 100
            case 19:
            case 18:
            case 17:
            case 16: // for 80 and above
                sprintf(grade, "A+");
                break;
            case 15: // for 75 to less than 80
                sprintf(grade, "A");
                break;
            case 14: // for 70 to less than 75
                sprintf(grade, "A-");
                break;
            case 13: // for 65 to less than 70
                sprintf(grade, "B+");
                break;
            case 12: // for 60 to less than 65
                sprintf(grade, "B");
                break;
            case 11: // for 55 to less than 60
                sprintf(grade, "B-");
                break;
            case 10: // for 50 to less than 55
                sprintf(grade, "C+");
                break;
            case 9:  // for 45 to less than 50
                sprintf(grade, "C");
                break;
            case 8:  // for 40 to less than 45
                sprintf(grade, "D");
                break;
            default: //for Less than 40
                sprintf(grade, "F");
                break;
        }
        printf("Your grade is: %s\n", grade);
    }

    return 0;
}
