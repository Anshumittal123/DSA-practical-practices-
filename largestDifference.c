// ============================ Find the largest Difference brtween a pair of an array elements =============

#include<stdio.h> 
#include<stdlib.h>

int largestDifference(int arr[], int size, int *subtractionCount){
    *subtractionCount = 0; 

    if(size < 2){
        return 0;
    }

    int maxdiff = abs(arr[1] - arr[0]);
    (*subtractionCount)++;

    for(int i=1; i < size - 1; i++){
        int diff = abs(arr[i + 1] - arr[i]);
        (*subtractionCount)++;
        if(diff > maxdiff){
            maxdiff = diff;
        }
    }
    return maxdiff;
}

int main(){
    int arr[] ={15, 20, 25, 30, 32, 35, 40, 50};
    int size = (sizeof(arr) / sizeof(arr[0]));
    int subtractionCount = 0;

    int maxDiff = largestDifference(arr, size, &subtractionCount);

    printf("The largest difference between consecutive integer is : %d \n", maxDiff);
    printf("The subtraction operation executed %d times. \n", subtractionCount);
}

// OUTPUT:
// The largest difference between consecutive integer is : 10
// The subtraction operation executed 7 times.