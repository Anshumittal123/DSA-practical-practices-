// ============================================= Find the Last even number ======================================

#include<stdio.h>

int findLastEven(int arr[], int size, int *loopCount, int *arithOPCount){
    int lastEvenIndex = -1;
    int element;
    *loopCount = 0;
    *arithOPCount = 0;

    for(int i = 0; i < size; i++){
        (*loopCount)++;
        (*arithOPCount)++;
        if (arr[i] % 2 == 0)
        {
            lastEvenIndex = i;
            element = arr[i];
        }
    }

    return lastEvenIndex;
}

int main(){
    int arr[20], size, loopCount, i, arithOPCount;
    printf("Enter a size of array: ");
    scanf("%d", &size);
    printf("Enter an element of an array: ");
    for(i=0; i < size; i++)
    scanf("%d", &arr[i]);

    int lastEvenIndex = findLastEven(arr, size, &loopCount, &arithOPCount);

    if(lastEvenIndex != -1){
        printf("The last even number is an index: %d", lastEvenIndex);
    }else{
        printf("There is a not even number into this array.");
    }

    printf("\nThe loop exceuted %d times.", loopCount);
    printf("\nThe arithmatic operation test wheather number is a even execute number of time is: %d", arithOPCount);

    return 0;
}


// OUTPUT:
// Enter a size of array: 5
// Enter an element of an array: 12
// 13
// 14
// 16
// 28
// The last even number is an index: 4
// The loop exceuted 5 times.
// The arithmatic operation test wheather number is a even execute number of time is: 5