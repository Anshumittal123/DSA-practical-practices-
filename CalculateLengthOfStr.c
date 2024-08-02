// ========================================== Calculate a length of String ==============================

#include<stdio.h>

int strLength(char str, int *loopCount, int *compareCount){
    int length = 0;
    *loopCount = 0;
    *compareCount = 0;

    while (str[length] !='\0')
    {
        (*compareCount)++;
        (*loopCount)++;
        length++;
    }
    
    return length;
}

int main(){
    char str[] = "Anshu Mittal";
    int loopCount, compareCount;

    int result  = strLength(str, &loopCount, &compareCount);

    printf("String is: %s \n", str);
    printf("Length of a string is: %d\n", result);
    printf("Number of time comparision opreation exceute is : %d \n", compareCount);
    printf("Number of time loop exceute is : %d \n", loopCount);

    return 0;
}

// OUTPUT:
// String is: Anshu Mittal
// Length of a string is: 12
// Number of time comparision opreation exceute is : 12
// Number of time loop exceute is : 12