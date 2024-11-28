#include <stdio.h>

int main() {

    // Break -> Stop the program
    // Continue -> Skips

    int i;

    for (i = 1; i < 10; i++) {

        if (i == 3) {
            continue;
        }

        printf("%d\n", i);
    }
    
    return 0;
}