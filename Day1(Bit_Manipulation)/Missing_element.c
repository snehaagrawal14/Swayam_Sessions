// Find the one missing element from 1 to n.

#include<stdio.h>

int missing_element(int arr[], int n){
    int ele = 0;
    for(int i=0; i<n; i++){
        ele = ele ^ (i+1) ^ arr[i];
    }
    return ele ^ (n+1);
}

int main(){

    int arr[] = {1, 2, 3, 5, 9, 7, 8, 6};
    printf("Missing element: %d", missing_element(arr, 8));

    return 0;
}