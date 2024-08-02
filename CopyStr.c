// =========================================== Copy a one string into another string ===========================

#include<stdio.h>
void copyString(char str1[], char str2[], int *assignCount, int *loopCount){
    *assignCount = 0;
    *loopCount = 0;

    while (str1[*loopCount] != '\0'){
        str2[*loopCount] = str1[*loopCount];
        (*loopCount)++;
        (*assignCount)++;
    }
    
    str2[*loopCount] = '\0';
    (*assignCount)++;
}

int main(){
    char str1[] = "Anshu Mittal";
    char str2[50];
    int assignCount, loopCount;

    copyString(str1, str2, &assignCount, &loopCount);

    printf("Original String is: %s \n", str1);
    printf("Copy string is: %s \n", str2);
    printf("Assignment Operator execute time is: %d \n", assignCount);
    printf("Loop execute time is: %d \n", loopCount);

    return 0;
}

// OUTPUT:
// Original String is: Anshu Mittal
// Copy string is: Anshu Mittal
// Assignment Operator execute time is: 13
// Loop execute time is: 12