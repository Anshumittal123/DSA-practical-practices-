// ================================ Check a string is a palindrome or not =============================

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool strPalindrome(char str[], int *compareCount, int *loopCount){
    int left = 0;
    int right = strlen(str) - 1;
    *compareCount = 0;
    *loopCount = 0;

    while (left < right){
        (*compareCount)++;
        (*loopCount)++;
        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}   

void main(){
    char str[] = "madam";
    int compareCount, loopCount;

    bool result = strPalindrome(str, &compareCount, &loopCount);

    printf("String: %s\n", str);
    printf("Is string palindrome? %s \n", result ? "Yes":"No");
    printf("Number of loop executions: %d\n", loopCount);
    printf("Number of comparision executions: %d\n", compareCount);

}


// OUTPUT:
// String: madam
// Is string palindrome? Yes
// Number of loop executions: 2
// Number of comparision executions: 2