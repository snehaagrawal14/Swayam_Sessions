// Invert a bit at given position

#include<stdio.h>

int invert(int n, int pos){
    int mask = 1<<pos;
    return n ^ mask;
}

int main(){

    int n = 21;
    int pos = 2;
    printf("Before inverting: %d\nAfter inverting: %d", n, invert(n, pos));

    return 0;
}