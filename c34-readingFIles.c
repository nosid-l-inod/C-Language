    
// Description: Reading files


#include <stdio.h>


int main() {

    // Open file
    FILE *pFile = fopen("files/file2.txt", "r");


    // A buffer holds one line of a file. One at a time.
    char buffer[255];


    // Check if file exists
    if (pFile == NULL) {
        printf("Unable to open file");
    }
        

    // Use fgets to read a line of a file
    // Use while loop to read all the lines of the file
    while (fgets(buffer, sizeof(buffer), pFile) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(pFile);    
}