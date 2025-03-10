
#include <stdio.h>
#include <string.h>

int sumOdd(int arr[],int index,int len) {
    if (index == len) {
        printf("%d",arr[len-1]);
        return 0;
    }
    if (arr[index] % 2 != 0) {
        arr[index] += arr[index-1];
    }
    else {
        arr[index] = arr[index-1];
    }
    sumOdd(arr,index+1,len);
}

int main()
{
    int len;
    scanf("%d",&len);
    int arr[100];
    for(int i=0;i<len;i++) {
        scanf("%d",&arr[i]);
    }
    if (arr[0] % 2 == 0) {
        arr[0] = 0;
        
    }

    sumOdd(arr,1,len);
}
