// ============================================ Binary Search =================================

#include<stdio.h>

int BinarySearch(int arr[], int size, int num, int *compareCount, int *divisionArrayCount){
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        (*divisionArrayCount)++;
        int mid = (low + high) / 2;

        (*compareCount)++;
        if(arr[mid] == num){
            return mid;
        }else if(arr[mid] < num){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[20] = {10, 15, 20, 25, 30, 32, 35, 40, 45, 50};
    int size = (sizeof(arr) / sizeof(int) - 1);
    int num = 32;
    int compareCount = 0, divisionArrayCount = 0;

    int result = BinarySearch(arr, size, num, &compareCount, &divisionArrayCount);

    if (result != -1)
    {
        printf("The element %d is at index %d.\n", num, result);
    }else{
        printf("The element %d is not present in the array.", num);
    }
    
    printf("Number of comparisons executed: %d\n", compareCount);
    printf("Number of divisions executed: %d\n", divisionArrayCount);
    return 0;
}

// OUTPUT:
// The element 32 is at index 5.
// Number of comparisons executed: 4
// Number of divisions executed: 4