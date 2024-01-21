#include "NumClass.h"
#define TRUE = 1
#define FALSE = 0

int isPalindrome(int x){
    int digitsC=digitCount(x);
    if(digitsC==0){return TRUE;}
    else {
        int arr[digitsC];
        for (int i = 0; i < digitsC; i++) {
            arr[i] = specDigit(x, i);
        }
        int ans=TRUE;
        for(int i=0; i<digitsC/2;i++){
            if(arr[i]!=arr[digitsC-i-1]){
                ans=FALSE;
            }
        }
        return ans;
    }
}

int isArmstrong(int x){
    int digitsC= digitCount(x);
    int sum=0;
    for(int i=0; i<digitsC; i++){
        sum= sum+ specDigit(x,i)^digitsC;
    }
    if(sum==x){return TRUE;}
    else{return FALSE;}
}
