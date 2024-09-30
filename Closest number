#include<stdio.h>
int main(){
    
    int num,target,large=0,small=100;
    printf("Enter size:");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter target:");
    scanf("%d",&target);

    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            for(int k=j+1;k<num;k++)
            {
                
                     if(arr[i]+arr[j]+arr[k]==target)
                {
                    printf("%d %d %d",arr[i],arr[j],arr[k]);
                    return 0;
                
            }
                else if(arr[i]+arr[j]+arr[k]<target && arr[i]+arr[j]+arr[k]>large)
                {
                    large=arr[i]+arr[j]+arr[k];
                }
                else if(arr[i]+arr[j]+arr[k]>target && arr[i]+arr[j]+arr[k]<small)
                {
                    small=arr[i]+arr[j]+arr[k];
                }
            }
        }
    }
    if(target-large<small-target)
    {
        printf("%d",large);
    }
    else
    {
        printf("%d",small);
    }
    return 0;
}
