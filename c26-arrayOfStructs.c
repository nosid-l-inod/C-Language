#include <stdio.h>
#include <string.h>

struct Player {
    char name[50];
    float ppg;
};

int main() {
    struct Player player1 = {"Stephen Curry", 22.0};
    struct Player player2 = {"Lebron James", 23.2};
    struct Player player3 = {"Kevin Durant", 27.6};
    struct Player player4 = {"Giannis Antetokounmpo", 31.6};
    
    // Create the array of structs
    struct Player array[] = {player1, player2, player3, player4};
    int length = sizeof(array) / sizeof(array[0]);

    // Loop throught the array
    // \t tab
    // %-12s left justify %s
    for (int i = 0; i < length; i++) {
        printf("Name: %-30s\t", array[i].name); 
        printf("PPG: %.1f\n", array[i].ppg);
    }

    return 0;
}