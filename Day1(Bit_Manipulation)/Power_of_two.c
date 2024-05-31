// Program to find whether a no is power of two

#include<stdio.h>

int power_of_2(int n){
    return n && !(n&(n-1));
}

int main(){

    int n = 64;
    if(power_of_2(n))
        printf("%d is a power of 2", n);
    else
        printf("%d is not a power of 2.", n);

    return 0;
}