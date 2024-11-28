#include <stdio.h>
#include <ctype.h>

int main() {
    
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    grade = toupper(grade);

    switch (grade) {
        case 'A':
            printf("Your grade is great\n");
            break; // Add break so it does not execute every options
        case 'B':
            printf("You did good\n");
            break;
        case 'C':
            printf("You did okay");
        case 'D':
            printf("You have a loot to improve");
            break;
        case 'E':
            printf("Damn kid!! Next time it needs to be way better");
            break;
        default:
            printf("This is not a valid grade");
    }

    return 0;
}