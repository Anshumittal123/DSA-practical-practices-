// ================================================== Insertion sort ===================================

#include<stdio.h>

void insertionSort(int arr[], int size, int *swapCount){
    int i, j, temp;

    for(i = 1; i<size; i++){
        temp = arr[i];
        j = i - 1;
        while ( j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
            (*swapCount)++;
        }
        arr[j + 1] = temp;

        printf("Step %d: \n", i);
        for (int k = 0; k < size; k++){
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main(){
    int arr[] = {5, 4, 10, 1, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int swapCount = 0;

    printf("Original Array is: \n");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, size, &swapCount);

    printf("Sorted array is: \n");
    for(int i = 0; i<size; i++){
        printf("%d \n", arr[i]);
    }
    printf("\n");

    printf("Number of swap operations: %d", swapCount);

    return 0;
}

// OUTPUT:
// Original Array is:
// 5 4 10 1 6 2
// Step 1:
// 4 5 10 1 6 2
// Step 2:
// 4 5 10 1 6 2
// Step 3:
// 1 4 5 10 6 2
// Step 4:
// 1 4 5 6 10 2
// Step 5:
// 1 2 4 5 6 10
// Sorted array is:
// 1
// 2
// 4
// 5
// 6
// 10

// Number of swap operations: 9