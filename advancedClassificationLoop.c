#include "NumClass.h"
#define TRUE = 1
#define FALSE = 0
int digitCount(int x);
int atseret(int x);
int specDigit(int num, int d);
int power(int num, int maarich);

//Check if number is a palindrome
int isPalindrome(int x){
    if(x<0){return 0;}
    int digitsC=digitCount(x);
    if(digitsC==0){return 1;}
    else {
        int arr[digitsC];
        //Enter all the digits to array
        for (int i = 0; i < digitsC; i++) {
            arr[i] = specDigit(x, i);
        }
        int ans=1;
        //Check that the mirror numbers are equal
        for(int i=0; i<digitsC/2;i++){
            if(arr[i]!=arr[digitsC-i-1]){
                ans=0;
            }
        }
        return ans;
    }
}

//Check if number is armstrong
int isArmstrong(int x){
    if(x<0){return 0;}
    int digitsC= digitCount(x);
    int sum=0;
    //Calculate the sum of the digits in pow
    for(int i=0; i<digitsC; i++){
        sum= sum + power(specDigit(x, i), digitsC);
    }
    if(sum==x){return 1;}
    else{return 0;}
}
