#include "NumClass.h"
#define TRUE = 1
#define FALSE = 0
int isPalindromeRecursive(int x, int start, int end);
int isArmstrongRecursive(int x, int sum, int digit);

int isPalindrome(int x){
    return isPalindromeRecursive(x,0, digitCount(x)-1);
}

int isPalindromeRecursive(int x, int start, int end){
    if(start>=end){return TRUE;}
    else{
        if(specDigit(x,start)!= specDigit(x,end)){return FALSE;}
    }
    return isPalindromeRecursive(x,start+1,end-1);
}

int isArmstrong(int x){
    return isArmstrongRecursive(x, 0, 0);
}

int isArmstrongRecursive(int x, int sum, int digit){
    if(digit>= digitCount(x)){return FALSE;}
    sum=sum+ specDigit(x,digit)^ digitCount(x);
    if(sum==x && digit== digitCount(x)-1){return TRUE;}
    return isArmstrongRecursive(x,sum,digit+1);
}