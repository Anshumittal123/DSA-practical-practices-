// =================================== Find  left to right Binary Exponentiation ============================

#include<stdio.h>

unsigned long long int binaryExponentiation(int a, int b, int *loopCount){
    unsigned long long int result = 1;
    *loopCount = 0;

    while (b > 0){
        (*loopCount)++;
        if(b % 2 == 1){
            result *= a;
        }
        a *= a;
        b >>= 1;
    }
    return result;
}
   
int main(){
    int a = 2;
    int b = 10;
    int loopCount = 0;

    unsigned long long int result = binaryExponentiation(a, b, &loopCount);

    printf("Result of %d %d is: %llu \n", a, b, result);
    printf("Number of loop executions: %d\n", loopCount);

    return 0;
}

// OUTPUT:
// Result of 2 10 is: 1024
// Number of loop executions: 4