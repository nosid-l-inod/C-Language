#include <stdio.h>
#include <string.h>

int main() {

    // Arrays store multiple values of the same data type

    // Declare
    int array[] = {1, 2, 3, 4, 5};


    // Acess elements by index
    printf("First element: %d\n", array[0]);


    // Length
    int length = sizeof(array) / sizeof(array[0]);
    printf("Length of the array: %d\n\n", length);


    // Iterate
    for (int i = 0; i < length; i++) {
        printf("Element in the position %d: %d\n", i, array[i]);
    }
    

    // Array of strings: *array[] = {} (We use pointers; cant be modified)
    char *names[] = {"Lebron", "Steph", "KD"};


    // Length
    int l = sizeof(names) / sizeof(names[0]);
    printf("Size of the array of names: %d", l);
    

    // Empty array
    int array2[2];


    // Declare elements
    array2[0] = 30;
    array2[1] = 40;

    printf("\nSecond element in array2: %d", array2[1]);



    return 0;
}