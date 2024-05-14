// Check bit is clear or set at given position

#include<stdio.h>

int check_bit(int n, int pos){
    int mask = 1<<pos;
    if(n & mask)
        return 1;
    else
        return 0;
}

int main(){

    int n = 21;
    int pos = 3;
    if(check_bit(n, pos)){
        printf("Set bit");
    }
    else{
        printf("Clear bit");
    }

    return 0;
}