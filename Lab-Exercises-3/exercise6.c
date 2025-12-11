#include <stdio.h>
#include <stdlib.h>

// Function that receives a 2D array and its dimensions
// It allocates an array that stores the sum of each column
int* func(int **board1, int rows, int coll) {

    // allocate memory for the result array (one sum per column)
    int* sums = malloc(coll * sizeof(int));

    // initialize all sums to 0
    for (int j = 0; j < coll; j++) {
        sums[j] = 0;
    }

    // calculate column sums
    for (int j = 0; j < coll; j++) {
        for (int i = 0; i < rows; i++) {
            sums[j] += board1[i][j];
        }
    }

    return sums;   // return dynamically allocated result
}

int main() {

    int rows, coll;

    // Ask user for dimensions
    printf("Give amount of board rows: ");
    scanf("%d", &rows);

    printf("Give amount of board columns: ");
    scanf("%d", &coll);

    // Allocate memory for the 2D array (array of int pointers)
    int** board = malloc(rows * sizeof(int*));

    // Allocate each row
    for (int i = 0; i < rows; i++) {
        board[i] = malloc(coll * sizeof(int));
    }

    // Read values from user
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < coll; j++) {
            printf("Give integer for row %d, column %d: ", i, j);
            scanf("%d", &board[i][j]);
        }
    }

    // Call the function and get the column sums
    int* result = func(board, rows, coll);

    // Print results
    printf("The sum of each column is:\n");
    for (int j = 0; j < coll; j++) {
        printf("%d ", result[j]);
    }


    return 0;
}
