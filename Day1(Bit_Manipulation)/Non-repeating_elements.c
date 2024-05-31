// Find the two non-repeating elements in an array of repeating elements.

#include<stdio.h>

int XOR(int arr[], int n){
    int xor = 0;
    for(int i=0; i<n; i++){
        xor ^= arr[i];
    }
    return xor;
}

int main(){

    int arr[] = {1, 3, 2, 5, 5, 6, 2, 1, 3, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int xor = XOR(arr, n);
    int mask = xor & -xor;
    int d1 = 0;
    int d2 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] & mask)
            d1 ^= arr[i];
        else
            d2 ^= arr[i];
    }
    printf("Non-repeating elements are: %d and %d", d1, d2);

    return 0;
}