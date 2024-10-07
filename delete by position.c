#include<stdio.h>
int main(){
    
    int  num,del;
    printf("Enter size:");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter pos to delete:");
    scanf("%d",&del);
    for(int i=0;i<num;i++)
    {
        if(i==del)
        {
            arr[i]=' ';
        }
    }
    for(int i=0;i<num;i++)
    {
    if(arr[i]==32)
    {
        continue;
    }
        printf("%d",arr[i]);
    }
return 0;
}
