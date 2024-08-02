// ========================= Sort an elements of an array with use of bubble sort ==========================

#include<stdio.h>

void bubbleSort(int arr[], int size, int *innerLoopCount, int *outerLoopCount){
    *innerLoopCount = 0;
    *outerLoopCount = 0;
    int temp, flag= 0;

    for(int i = 0; i < size - 1; i++){
        (*outerLoopCount)++;
        for(int j = 0; j < size - i - 1; j++){
            (*innerLoopCount)++;
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }

        printf("Step %d: \n", i + 1);
        for (int k = 0; k < size; k++)
        printf("%d ", arr[k]);
        
        printf("\n");

        if(flag == 0){
            break;
        }
    }
}

void main(){
    int arr[] = {15, 16, 6, 8, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int innerLoopCount, outerLoopCount;

    printf("Original Array: \n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, size, &innerLoopCount, &outerLoopCount);

    printf("Sorted Array: \n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Number of time inner loop execute is : %d\n", innerLoopCount);
    printf("Number of time outer loop execute is: %d\n", outerLoopCount);

}


// OUTPUT:
// Original Array:
// 15 16 6 8 5
// Step 1:
// 15 6 8 5 16
// Step 2:
// 6 8 5 15 16
// Step 3:
// 6 5 8 15 16
// Step 4:
// 5 6 8 15 16
// Sorted Array:
// 5 6 8 15 16
// Number of time inner loop execute is : 10
// Number of time outer loop execute is: 4