#include <stdio.h>
#include<stdlib.h>

void insertionSort(int *a, int n){
    int i, j, key;
    for(i=1; i<n; i++){
        key = a[i];
        j=i-1;
        while(j>=0 && key < a[j]){
            a[j+1] = a[j];
            j--;
            printarray(a, n);
        }
        a[j+1] = key;
    }
}

void printarray(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
