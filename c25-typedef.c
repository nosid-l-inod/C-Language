#include <stdio.h>
#include <string.h>

// Define a typedef variable
// Any character variable with 50 will be string
typedef char string[50];


// Use typedef with struct
typedef struct {
    char name[50];
    char color[50];
    int age;
} Robot; // The name of the struct is in the end


int main() {
    // Typedef gives a datatype a nickname
    
    // Define the string variable
    string name = "This is a variable with typedef";
    printf("Name: %s\n\n", name);
    

    // While calling the struct, we dont need to use the word "struct"
    // Use: Robot autobot
    // Instead of: struct Robot autobot
    Robot autobot = {"Optimus prime", "Blue", 9};    
    Robot decepticon = {"Megatron", "Black", 9};

    printf("Autobot's name: %s\n", autobot.name);
    printf("Autobot's color: %s\n", autobot.color);
    printf("Autobot's age: %d\n\n", autobot.age);

    printf("Decepticon's name: %s\n", autobot.name);
    printf("Decepticon's color: %s\n", autobot.color);
    printf("Decepticon's age: %d\n\n", decepticon.age);
    
    return 0;
}