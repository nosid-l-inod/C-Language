// Struct is a collection of related members
// They are similar to classes

#include <stdio.h>
#include <string.h>

struct Player {
    char name[50];
    char team[50];
    int score;
};

int main() {
    struct Player champion;
    struct Player legend;

    // Another way of doing this
    struct Player me = {"Albino", "Mesa Amarela", 7639};

    strcpy(champion.name, "Scump");
    strcpy(champion.team, "Optic Gaming");
    champion.score = 1272;

    strcpy(legend.name, "Mohamed Light");
    strcpy(legend.team, "Twisted Minds");
    legend.score = 8231;

    printf("Champion's name: %s\n", champion.name);
    printf("Champion's team: %s\n", champion.team);
    printf("Champion's score: %d\n\n", champion.score);

    printf("Legend's name: %s\n", legend.name);
    printf("Legend's team: %s\n", legend.team);
    printf("Legend's score: %d\n\n", legend.score);
    
    printf("Jack's name: %s\n", me.name);
    printf("Jack's team: %s\n", me.team);
    printf("Jack's score: %d\n", me.score);

    return 0;
}