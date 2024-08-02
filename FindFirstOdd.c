// =========================================== Find First odd number ==============================

#include<stdio.h>
int FindFirstOdd(int arr[], int size, int *loopCount, int *arithOPCount){
    *loopCount = 0;
    *arithOPCount = 0;

    for(int i = 0; i < size; i++){
        (*loopCount)++;
        (*arithOPCount)++;
        if(arr[i] % 2 != 0){
            return i; 
        }
    }
    return -1;
}

int main(){
    int arr[10] = {2, 4, 6, 7, 8, 10, 12, 13};
    int size = (sizeof(arr) / sizeof(arr[0]));
    int loopCount=0, arithOPCount =0;

    int firstOddIndex = FindFirstOdd(arr, size, &loopCount, &arithOPCount); 

    if(firstOddIndex != -1){
        printf("The first odd number is at index : %d\n", firstOddIndex);
    }else{
        printf("There are not any odd number into array.\n");
    }

    printf("The loop execution %d time. \n", loopCount);
    printf("The arithmatic opeartion to test weather number is odd executed %d times", arithOPCount);

    return 0;
}

// OUTPUT:
// The first odd number is at index : 3
// The loop execution 4 time.
// The arithmatic opeartion to test weather number is odd executed 4 times