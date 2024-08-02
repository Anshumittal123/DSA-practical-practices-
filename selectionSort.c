// =================================================== Selection Sort ===============================

#include<stdio.h>

void selectionSort(int arr[], int size, int *loopCount, int *compareCount){
    int i, j, temp;
    *loopCount = 0;
    *compareCount = 0;

    for(i=0; i < size - 1; i++){
        int min = i;
        for(j = i + 1; j < size; j++){
            (*loopCount)++;
            (*compareCount)++;
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }

        printf("steps %d: \n", i + 1);
        for (int k = 0; k < size; k++){
            printf("%d \n", arr[k]);
        }
        printf("\n");
    }
}

int main(){
    int arr[] = {7, 4, 10, 8, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int loopCount = 0, compareCount = 0;

    printf("Origal array is: \n");
    for (int i = 0; i < size; i++){
        printf("%d \n", arr[i]);
    }
    
    selectionSort(arr, size, &loopCount, &compareCount);

    printf("Sorted Array is: \n");
    for(int i = 0; i < size; i++){
        printf("%d \n", arr[i]);
    }
    printf("\n");

    printf("Number of times %d loop exceuted. \n", loopCount);
    printf("Number of times %d comparisons operation exceuted. \n", compareCount);

    return 0;
}

// OUTPUT:
// Origal array is:
// 7
// 4
// 10
// 8
// 3
// 1
// steps 1:
// 1
// 4
// 10
// 8
// 3
// 7

// steps 2:
// 1
// 3
// 10
// 8
// 4
// 7

// steps 3:
// 1
// 3
// 4
// 8
// 10
// 7

// steps 4:
// 1
// 3
// 4
// 7
// 10
// 8

// steps 5:
// 1
// 3
// 4
// 7
// 8
// 10

// Sorted Array is:
// 1
// 3
// 4
// 7
// 8
// 10

// Number of times 15 loop exceuted.
// Number of times 15 comparisons operation exceuted.