// ======================================== String Reverse =====================================

#include<stdio.h>
#include<string.h>

void reverseString(char *str, int *loopCount, int *assignCount){
    int n = strlen(str);    
    *loopCount = 0;
    *assignCount = 0;

    for(int i =0; i < n / 2; i++){
        (*loopCount)++;

        char temp = str[i];
        str[i] =  str[n - i - 1];
        str[n - i - 1] = temp;

        *assignCount += 3;
    }
}

int main(){
    char str[] = "Anshu Mittal";
    int loopCount = 0, assignCount = 0;

    printf("Original String is: %s \n", str);

    reverseString(str, &loopCount, &assignCount);

    printf("Reverse String is: %s \n", str);

    printf("%d Number of time loop exceuted. \n", loopCount);
    printf("%d Number of time assignment operator exceuted. \n", loopCount);

    return 0;
}

// OUTPUT:
// Original String is: Anshu Mittal
// Reverse String is: lattiM uhsnA
// 6 Number of time loop exceuted.
// 6 Number of time assignment operator exceuted.