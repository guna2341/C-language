#include<stdio.h>
int main(){
    int arr[365],large=-99999999,small=9999999;
    int num;
    printf("Enter size:");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    printf("%d \n%d",large,small);
return 0;
}

