// Get user input

#include <stdio.h>
#include <string.h> 

int main() {
    
    char fullName[50];
    int age;

    printf("Type your age: ");
    scanf("%d", &age); // Scanf only reads one word and ignores everything after the space
    while (getchar() != '\n'); // Limpar o buffer de scanf  

    printf("Type your full name: ");
    fgets(fullName, 50, stdin); // fgets reads the whole input. It adds a space in the input
    fullName[strlen(fullName) - 1] = '\0'; // Use this to removes the newline character
    // The element in the index len-1 == \0

    printf("\nYour full name: %s\n", fullName);
    printf("Your age: %d\n", age); 
    
    return 0;
}