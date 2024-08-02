// =================================== Generate Fibonacci Series of 10 numbers ===========================

#include<stdio.h>

void generateFibonacci(int n, int *assignCount, int *addCount, int *loopCount){
    *assignCount = 0;
    *addCount = 0;
    *loopCount = 0;
    int fib[n];

    fib[0] = 0;
    fib[1] = 1;
    (*assignCount)++;

    for(int i = 2; i < n; i++){
        (*loopCount)++;
        fib[i] = fib[i - 1] + fib[i - 2];
        (*assignCount)++;
        (*addCount)++;
    }

    printf("Fibonacci Series: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", fib[i]);
    }
    printf("\n");
}

void main(){
    int n = 10;
    int assignCount, addCount, loopCount;

    generateFibonacci(n, &assignCount, &addCount, &loopCount);

    printf("Number of loop executions: %d\n", loopCount);
    printf("Number of addition executions: %d\n", addCount);
    printf("Number of assignment executions: %d\n", assignCount);

}

// OUTPUT:
// Fibonacci Series:
// 0 1 1 2 3 5 8 13 21 34
// Number of loop executions: 8
// Number of addition executions: 8
// Number of assignment executions: 9