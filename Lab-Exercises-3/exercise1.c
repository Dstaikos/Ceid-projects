#include <stdio.h>

void fillBoard(int board[5][5]) {
    // Function for inserting numbers into the 5x5 board
    int num;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Give number at index [%d][%d]: ", i, j);
            scanf("%d", &num);
            board[i][j] = num;
        }
    }
}

int getValidInput() {
    // Function that checks if input is valid
    int num;
    printf("Give number between 1 and 5: ");
    scanf("%d", &num);
    while (num < 1 || num > 5) {
        printf("Invalid input. Please give a number between 1 and 5: ");
        scanf("%d", &num);
    }
    return num - 1;  // return num-1 because arrays are 0-based
}

void fillBoard2(int board[5][5], int board2[4][4], int x) {
    // function for copying integers into 4x4 board
    int k2 = 0, n2;
    for (int i = 0; i < 5; i++) {
        if (i == x) continue;  // skipping row x
        n2 = 0;
        for (int j = 0; j < 5; j++) {
            if (j == x) continue;  // skipping collumn x
            board2[k2][n2] = board[i][j];
            n2++;
        }
        k2++;
    }
}

void printBoard2(int board2[4][4]) {
    // function for printing 4x4 board
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", board2[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int board[5][5], board2[4][4];
    int x;

    fillBoard(board);

    x = getValidInput();

    fillBoard2(board, board2, x);

    printBoard2(board2);

    return 0;
}




