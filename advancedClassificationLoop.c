#include "NumClass.h"
#define TRUE = 1
#define FALSE = 0
int digitCount(int x);
int atseret(int x);
int specDigit(int num, int d);
int power(int num, int maarich);

int isPalindrome(int x){
    int digitsC=digitCount(x);
    if(digitsC==0){return 1;}
    else {
        int arr[digitsC];
        for (int i = 0; i < digitsC; i++) {
            arr[i] = specDigit(x, i);
        }
        int ans=1;
        for(int i=0; i<digitsC/2;i++){
            if(arr[i]!=arr[digitsC-i-1]){
                ans=0;
            }
        }
        return ans;
    }
}

int isArmstrong(int x){
    int digitsC= digitCount(x);
    int sum=0;
    for(int i=0; i<digitsC; i++){
        sum= sum + power(specDigit(x, i), digitsC);
    }
    if(sum==x){return 1;}
    else{return 0;}
}
