// Author: doni
// Date: 24-11-2024
// Description: Accept user input in C language

#include <stdio.h>
#include <string.h>

int main() {

    // Get user input
    char name[50];
    int age;

    // fgets reads the whole text
    printf("Type your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    // scanf dont read characters after space
    printf("Type your age: ");
    scanf("%d", &age);

    // Show the value typed
    printf("\nHello, %s\n", name);
    printf("You are %d year old.\n", age);
    
    return 0;
}