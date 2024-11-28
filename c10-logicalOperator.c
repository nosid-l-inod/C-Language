#include <stdio.h>
#include <stdbool.h>

int main() {

    // && = AND -> Both conditions need to be true
    int age = 22;
    bool drink = false;

    if (age >= 18 && drink == false) {
        printf("You are good to drive today\n");
    } else {
        printf("You should not be driving\n");
    }

    // || = OR -> One of the conditions need to be true
    int temperature = 25;
    bool sunny = true;

    if (temperature < 24 || sunny == true) {
        printf("The weather is good todat.\n");
    } else {
        printf("The weather is not good at all.\n");
    }
    
    // ! = NOT -> Reverse the condition
    bool isSunny = true;

    if (!isSunny) {
        printf("Its cloudy outside.");
    } else {
        printf("Is sunny outside.");
    }
    
    return 0;
}