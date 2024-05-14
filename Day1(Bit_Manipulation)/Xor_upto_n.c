// Compute XOR from 1 to n(direct method)

#include<stdio.h>

int XOR(int n){
    int r = n%4;
    if(r == 0)
        return n;
    else if(r == 1)
        return 1;
    else if(r == 2)
        return n+1;
    else
        return 0;
}

int main(){

    int n = 13;
    printf("XOR from 1 to %d: %d\n", n, XOR(n));
    
    return 0;
}