// ==================================== Find Largest number from element of array. =========================

#include<stdio.h>

int LargestNumber(int arr[], int size, int *compareCount){
    *compareCount = 0;
    int max = arr[0];

    for(int i = 0; i < size ; i++){
        if(arr[i] > max){
            (*compareCount)++;
            max = arr[i];
        }
    }

    return max;
}

int main(){
    int arr[] = {22, 3, 44, 12, 16, 13, 45, 65, 78, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int compareCount = 0;

    int result = LargestNumber(arr, size, &compareCount);

    printf("Largest number from array is: %d \n", result);
    printf("number of time comparision operation execute is: %d", compareCount);

    return 0;
}


// OUTPUT:
// Largest number from array is: 78
// number of time comparision operation execute is: 4