#include<stdio.h>
int main(){
    
    int num,temp,count=0;
    printf("Enter size:");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++)
    {
       for(int j=i+1;j<num;j++)
       {
           if(arr[i]==0)
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
    }
    for(int i=0;i<num;i++)
    {
        printf("%d",arr[i]);
    }
return 0;
}
