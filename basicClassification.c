
#include "NumClass.h"
#define TRUE = 1
#define FALSE = 0
int digitCount(int x);
int atseret(int x);
int specDigit(int num, int d);
int isPrime(int x);
int isStrong(int x);
int power(int num, int maarich);

 int isPrime(int x){
    if(x<1){
        return 0;
    }
    if(x==1 || x==2){
        return 1;
    }
    else {
        for (int i = 2; i < x / 2; i++) {
            if (x % i == 0) {
                return 0;
            }
        }
        return 1;
    }

}

int isStrong(int x){
    int dig= digitCount(x);
    int sumOfDig=0;
    for(int i=0; i<dig;i++){
        int z= specDigit(x, i);
        sumOfDig=sumOfDig+atseret(z);
    }
    if(x==sumOfDig){return 1;}
    else{return 0;}
}

int specDigit(int num, int d){
     return (num / power(10, d)) % 10;

 }

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

int power(int num, int maarich){
     int x=1;
     for(int i=1; i<=maarich; i++){
         x=num*x;
     }
     return x;
 }