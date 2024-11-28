#include <stdio.h>

int main() {

    // 2D arrays
    // Has rows and columns

    // array[rows][culumns]
    int array[2][3] = {{1, 2, 3},{4, 5, 6}};
    


    // Empty 2d array
    int matrix[2][3];

    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;



    // Rows length -> array / row 0
    int rows = sizeof(array) / sizeof(array[0]);

    // Columns length -> row 0 / element 0 row 0
    int columns = sizeof(array[0]) / sizeof(array[0][0]);



    // Iterate
    for (int row = 0; row < 2; row++) {
        for (int column = 0; column < 3; column++) {
            printf("Row %d, Column %d: %d\n", row, column, array[row][column]);
        }
    }

    
    
    return 0;
}