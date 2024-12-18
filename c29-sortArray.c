// Filename: SortArray
// Author: Doni Afonso
// Description: Program to sort an array

#include <stdio.h>

// Function to sort array in ascending order
// To sort in descending order, switch < for >
void sortArray(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j+1] = temp;
            }
        }
    }
}

// Function to print the list
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}
 
int main(void) {

    // Create array
    int array[] = {10, 33, 1, 332, 29, 94};
    int size = sizeof(array) / sizeof(array[0]);

    // Call the funtions
    sortArray(array, size);
    printArray(array, size);
    
    return 0;
}