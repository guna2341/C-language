#include<stdio.h>

int MinAndMax(int arr[],int n) {
    int min = arr[0];
    int max = arr[0];
    for(int i=0;i<n;i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Min:%d , Max:%d",min,max);
}

int main() {
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of the array:\n");
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    MinAndMax(arr,size);
}
