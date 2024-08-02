//================================ Evaluate a polynomial expression with using of Horner rule. ==================

#include<stdio.h>

double horner(int coeffs[], int degree, int x, int *additionCount, int *multiplicationCount){
    double result = coeffs[degree]; // Initialize result with the leading coefficient
    *multiplicationCount = 0;
    *additionCount = 0;

    for(int i = degree - 1; i>=0; i--){
        (*multiplicationCount)++;
        result = result * x;
        (*additionCount)++;
        result += coeffs[i];
    }
    return result;
}

int main(){
    // Example polynomial => p(x) = 2 + 3x + 4x^2 + 5x^3 (coeffs => 2, 3, 4, 5)
    int coeffs[] = {2, 3, 4, 5};
    int degree = sizeof(coeffs) / sizeof(coeffs[0]) - 1;
    int x = 2;
    int additionCount = 0, multiplactionCount = 0;

    double result = horner(coeffs, degree, x, &additionCount, &multiplactionCount);

    printf("The polynomial evaluated at x = %d is: %f \n", x, result);
    printf("Numbers of times multiplications excecuted: %d \n", multiplactionCount);
    printf("Numbers of times addition excecuted: %d \n", additionCount);

    return 0;
}

// OUTPUT:
// The polynomial evaluated at x = 2 is: 64.000000
// Numbers of times multiplications excecuted: 3
// Numbers of times addition excecuted: 3