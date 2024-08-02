//================================================ Linear Search =========================================

#include<stdio.h>
int main(){
    int arr[20], x, i, n, found=0, count = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter an element of array: ");
    for(i=0; i<n; i++)
    scanf("%d", &arr[i]);
    printf("Enter data that you want to found in this data list: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        count++;
        if(arr[i] == x){
            found = 1;
        break;
    }
    }

    if(found == 1){
       printf("\nData find in list of data at index: %d", i);
    }else{
       printf("\nData not find in list of data.");
    }

    printf("loop and comparison execute number of time: %d", count);

    return 0;
}

// OUTPUT:
// Enter size of array: 5
// Enter an element of array: 11
// 12
// 13
// 14
// 15
// Enter data that you want to found in this data list: 14
// loop and comparison execute number of time: 4
// Data find in list of data at index: 3