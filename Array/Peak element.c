#include<stdio.h>
int main(){
int num;
printf("Enter size:");
scanf("%d",&num);
int arr[num];
for(int i=0;i<num;i++)
{
    scanf("%d",&arr[i]);
}
for(int i=0;i<num;i++)
{
    if(i==0&&arr[i]>arr[i+1])
    {
        printf("%d",i);
        break;
    }
    else if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
    {
        printf("%d",i);
        break;
    }
    else if(i==num-1 && arr[i]>arr[i-1])
    {
        printf("%d",i);
        break;
    }
}  
return 0;
}
