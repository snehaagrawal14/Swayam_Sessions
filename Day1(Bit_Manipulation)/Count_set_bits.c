// Count set bits in a given number.

#include<stdio.h>

int count_set_bits(int n){
    int count = 0;
    while(n){
        count += n&1;
        n = n>>1;
    }
    return count;
}

int main(){

    int n = 15;
    printf("No. of set bits in %d = %d", n, count_set_bits(n));

    return 0;
}