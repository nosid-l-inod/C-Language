// Description: writing files

#include <stdio.h>

int main() {
    
    // File modes:
    // w: write
    // r: read
    // a: append
    

    // Open a gile
    FILE *pFile = fopen("files/file.txt", "w");


    // Write a file
    fprintf(pFile, "Hello, this is your big bro");


    // Close file
    fclose(pFile);

    
    // Remove a file
    if (remove("files/file.txt") == 0) {
        printf("The file was removed");
    } else {
        printf("The file was not removed");
    }
 }