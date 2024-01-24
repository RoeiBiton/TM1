#include <stdio.h>
#include "NumClass.h"

int main() {
    int x=0;
    int y=0;
    printf("Please enter a number: \n");
    scanf("%d", &x);
    printf("Please enter another number: \n");
    scanf("%d", &y);
    int z=0;
    if(y<x){
        z=x;
        x=y;
        y=z;
    }
    printf("The Armstrong numbers are: ");
    for(int i=x; i<=y;i++){
        if(isArmstrong(i)){
            printf("%d ",i );
        }
    }
    printf("\n");

    printf("The Palindromes are: ");
    for(int i=x; i<=y;i++){
        if(isPalindrome2(i)){
            printf("%d ",i );
        }
    }
    printf("\n");

    printf("The Prime numbers are: ");
    for(int i=x; i<=y;i++){
        if(isPrime(i)){
            printf("%d ",i );
        }
    }
    printf("\n");

    printf("The Strong numbers are: ");
    for(int i=x; i<=y;i++){
        if(isStrong(i)){
            printf("%d ",i );
        }
    }
    printf("\n");
    return 0;
}
