
#include "NumClass.h"
#define TRUE = 1
#define FALSE = 0
int digitCount(int x);
int atseret(int x);
int specDigit(int num, int d);
int isPrime(int x);
int isStrong(int x);
int power(int num, int maarich);

// Function that check if x is Prime
 int isPrime(int x){
    if(x<1){
        return 0;
    }
    if(x==1 || x==2){
        return 1;
    }
    else {
        //Check that x is not divided in any number but itself and 1
        for (int i = 2; i <= x / 2; i++) {
            if (x % i == 0) {
                return 0;
            }
        }
        return 1;
    }

}
//Check if x is Strong number
int isStrong(int x){
    if(x<0){return 0;}
    int dig= digitCount(x);
    int sumOfDig=0;
    //Calculate sum of digits
    for(int i=0; i<dig;i++){
        int z= specDigit(x, i);
        sumOfDig=sumOfDig+atseret(z);
    }
    if(x==sumOfDig){return 1;}
    else{return 0;}
}
//Give a specific digit from num
int specDigit(int num, int d){
     return (num / power(10, d)) % 10;

 }
//Check the amount of digit in x
int digitCount(int x){
    int counter=0;
    int y=x;
    while(y!=0){
        counter=counter+1;
        y=y/10;
    }
    return counter;
}
// return the factorial of the number x, for example if x=4, it will return 1*2*3*4
int atseret(int x){
    if(x<1){
        return 0;
    }
    else{
        int y=1;
        for(int i=1; i<=x; i++){
            y=y*i;
        }
        return y;
    }
}
// Calculate power of number
int power(int num, int maarich){
     int x=1;
     for(int i=1; i<=maarich; i++){
         x=num*x;
     }
     return x;
 }
