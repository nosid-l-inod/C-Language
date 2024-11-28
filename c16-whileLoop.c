#include <stdio.h>
#include <string.h>

int main() {

    // While loop
    // Executes if a condition is true
    char fullName[50];
    
    printf("Type your name: ");
    fgets(fullName, 50, stdin);
    fullName[strlen(fullName) - 1] = '\0'; // Get rid of the new line char

    while (strlen(fullName) == 0) {
        printf("You did not typed your name!\n");

        printf("Whats your name: ");
        fgets(fullName, 50, stdin);
        fullName[strlen(fullName) -1] = '\0';
    }

    printf("Hello %s, hope you are doing good.", fullName);
    
    return 0;
}