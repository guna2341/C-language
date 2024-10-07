#include<stdio.h>
int main(){
    
    int num,target;
    printf("Enter size:");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter target number:");
    scanf("%d",&target);
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("(%d,%d)",arr[i],arr[j]);
            }
        }
    }
    
return 0;
}
