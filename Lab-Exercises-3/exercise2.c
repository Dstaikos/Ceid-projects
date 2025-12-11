#include <stdio.h>



void fillMatrix(int matrix[3][3]){

    //function for filling up 3x3 matrix

    int num;

    for (int i=0;i<3;i++){

        for (int j=0;j<3;j++){

            printf("Give number at index [%d][%d]: ", i, j);
            scanf("%d", &num);
            matrix[i][j] = num;

        }
    }
}



void printMatrixCorners(int matrix[3][3], int sum) {

    //function for printing diagonal of the matrix

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if((i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2)){
                printf("%d\t", matrix[i][j]);
                sum  += matrix[i][j];
            }else{
                printf("%d\t", 0);
            }

        }
        printf("\n");

    }
    printf("\n");
    printf("sum: %d",sum);
    printf("\n\n");
}


void printUpperTriangular(int matrix[3][3], int sum) {

    //function for printing the upper triangular matrix

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if((i == 1 && j == 0) || (i ==2 && j == 0) || (i == 2 && j == 1)){
                printf("%d\t", 0);

            }else{
                printf("%d\t", matrix[i][j]);
                sum  += matrix[i][j];
            }

        }

        printf("\n");
    }
    printf("\n");
    printf("sum: %d",sum);
    printf("\n\n");
}


void printLowerTriangular(int matrix[3][3], int sum) {

    //function for printing the lower triangular matrix

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if((i == 0 && j == 1) || (i ==0 && j == 2) || (i == 1 && j == 2)){
                printf("%d\t", 0);

            }else{
                printf("%d\t", matrix[i][j]);
                sum  += matrix[i][j];
            }

        }

        printf("\n");
    }
    printf("\n");
    printf("sum: %d",sum);
    printf("\n\n");
}

void flipMatrix(int matrix[3][3], int newMatrix[3][3]){

    //function for transpose


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            newMatrix[i][j] = matrix[j][i];

            printf("%d\t", newMatrix[i][j]);

        }
        printf("\n");
    }

}

int main(){

    int matrix[3][3];

    int newMatrix[3][3];

    int sum = 0;

    fillMatrix(matrix);

    printMatrixCorners(matrix,0);

    printUpperTriangular(matrix,0);

    printLowerTriangular(matrix,0);

    flipMatrix(matrix, newMatrix);

    return 0;

}


