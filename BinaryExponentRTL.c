// ======================================== Find Right To left Binary exponentiation =======================

#include<stdio.h>

unsigned long long int rightToLeftBinaryExponents(int a, int b, int *loopCount){
    *loopCount = 0;
    int result = 1;

    while (b > 0){
        (*loopCount)++;
        if(b % 2 == 1){
            result *= a;
        }
        a *= a;
        b /= 2; 
    }   
    return result;
}

void main(){
    int a = 2;
    int b = 10;
    int loopCount;

    unsigned long long int result = rightToLeftBinaryExponents(a, b, &loopCount);

    printf("Result %d^%d is: %llu \n", a, b, result);
    printf("Number of loop execute is: %d", loopCount);
}


// OUTPUT:
// Result 2^10 is: 1024
// Number of loop execute is: 4