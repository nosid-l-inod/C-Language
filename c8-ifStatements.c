#include <stdio.h>

int main() {
    
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // We use if to check conditions
    if (age < 18) {
        printf("Your age too young!");
    } else if (age >= 18) {
        printf("Your are old anough. Get in!");
    } else {
        printf("\nHow old are you again?");
    }
    
    return 0;
}