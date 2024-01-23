#include "NumClass.h"
#define TRUE = 1
#define FALSE = 0
int isPalindromeRecursive(int x, int start, int end);
int isArmstrongRecursive(int x, int sum, int digit);

int isPalindrome(int x){
    return isPalindromeRecursive(x,0, digitCount(x)-1);
}

int isPalindromeRecursive(int x, int start, int end){
    if(start>=end){return 1;}
    else{
        if(specDigit(x,start)!= specDigit(x,end)){return 0;}
    }
    return isPalindromeRecursive(x,start+1,end-1);
}

int isArmstrong(int x){
    return isArmstrongRecursive(x, 0, 0);
}

int isArmstrongRecursive(int x, int sum, int digit){
    if(digit>= digitCount(x)){return 0;}
    sum= sum + power(specDigit(x, digit), digitCount(x));
    if(sum==x && digit== digitCount(x)-1){return 1;}
    return isArmstrongRecursive(x,sum,digit+1);
}