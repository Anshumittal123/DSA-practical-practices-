#include<stdio.h>
#include<string.h>

void combineString(char str1[], char str2[], char result[], int *loopCount, int *compareCount){
    int i, j;
    *loopCount = 0;
    *compareCount = 0;

    for(i = 0; str1[i] != '\0'; i++){
        result[i] = str1[i];
        (*loopCount)++;
        (*compareCount)++;
    }

    for(j = 0; str2[j] != '\0'; j++){
        result[i + j] = str2[j];
        (*loopCount)++;
        (*compareCount)++;
    }

    result[i + j] = '\0';
}

int main(){
    char str1[] = "Hello";
    char str2[] = " World";
    char result[50];
    int loopCount = 0, compareCount = 0;

    combineString(str1, str2, result, &loopCount, &compareCount);

    printf("Combined String is: %s\n", result);
    printf("Number of times %d loop executed.\n", loopCount);
    printf("Number of times %d comparison operation executed.\n", compareCount);

    return 0;
}

// OUTPUT:
// Combined String is: Hello World
// Number of times 11 loop executed.
// Number of times 11 comparison operation executed.