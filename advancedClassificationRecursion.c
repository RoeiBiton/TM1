#include "NumClass.h"
#define TRUE = 1
#define FALSE = 0
int digitCount(int x);
int atseret(int x);
int specDigit(int num, int d);
int power(int num, int maarich);

int isPalindromeRecursive(int x, int start, int end);
int isArmstrongRecursive(int x, int sum, int digit);

//Check if number is palindrome
int isPalindrome(int x){
    if(x<0){return 0;}
    return isPalindromeRecursive(x,0, digitCount(x)-1);
}

int isPalindromeRecursive(int x, int start, int end){
    if(start>=end){return 1;}
    else{
        if(specDigit(x,start)!= specDigit(x,end)){return 0;}
    }
    return isPalindromeRecursive(x,start+1,end-1);
}

//Check if number is armstrong
int isArmstrong(int x){
    if(x<0){return 0;}
    return isArmstrongRecursive(x, 0, 0);
}

int isArmstrongRecursive(int x, int sum, int digit){
    if(digit>= digitCount(x)){return 0;}
    sum= sum + power(specDigit(x, digit), digitCount(x));
    if(sum==x && digit== digitCount(x)-1){return 1;}
    return isArmstrongRecursive(x,sum,digit+1);
}