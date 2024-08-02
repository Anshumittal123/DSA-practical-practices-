//=========================================== Matrices Multiplications ==================================

#include<stdio.h>

void MultiplyMatrix(int mat1[3][3], int mat2[3][3], int result[3][3], int *compareCount, int *assignCount, int *multiCount, int *additionCount){
    *compareCount = 0;
    *assignCount = 0;
    *multiCount = 0;
    *additionCount = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            result[i][j] = 0;
            (*assignCount)++;
            for (int k = 0; k < 3; k++){
                (*compareCount)++;
                result[i][j] += mat1[i][k] * mat2[k][j];
                (*multiCount)++;
                (*additionCount)++;
            }
        }
    }
}

int main(){
    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    int mat2[3][3] ={
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1},
    };

    int result[3][3];
    int compareCount = 0, assignCount = 0, multiCount = 0, additionCount = 0;

    MultiplyMatrix(mat1, mat2, result, &compareCount, &assignCount, &multiCount, &additionCount);

    printf("Resultant Matrice: \n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    printf("Number of comparisons: %d\n", compareCount);
    printf("Number of assignments: %d\n", assignCount);
    printf("Number of multiplications: %d\n", multiCount);
    printf("Number of additions: %d\n", additionCount);

    return 0;
}

// OUTPUT:
// Resultant Matrice:
// 30 24 18
// 84 69 54
// 138 114 90
// Number of comparisons: 27
// Number of assignments: 9
// Number of multiplications: 27
// Number of additions: 27