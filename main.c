#include <stdio.h>
#include "NumClass.h"

int main() {
    int x=0;
    int y=0;
    //Get the numbers from the user
    scanf("%d" "%d",&x,&y);
    int z=0;
    //make x the lower number for easy calculate
    if(y<x){
        z=x;
        x=y;
        y=z;
    }
    //Print the Armstrong numbers
    printf("The Armstrong numbers are:");
    for(int i=x; i<=y;i++){
        if(isArmstrong(i)){
            printf(" %d",i );
        }
    }
    printf("\n");

    //Print the Palindromes numbers
    printf("The Palindromes are:");
    for(int i=x; i<=y;i++){
        if(isPalindrome(i)){
            printf(" %d",i );
        }
    }
    printf("\n");

    //Print the Prime numbers
    printf("The Prime numbers are:");
    for(int i=x; i<=y;i++){
        if(isPrime(i)){
            printf(" %d",i );
        }
    }
    printf("\n");
    //Print the Strong numbers
    printf("The Strong numbers are:");
    for(int i=x; i<=y;i++){
        if(isStrong(i)){
            printf(" %d",i );
        }
    }
    printf("\n");
    return 0;
}
