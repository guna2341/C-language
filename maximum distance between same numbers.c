#include<stdio.h>
int main(){
    
    int num,sum=1;
    printf("Enter size:");
    scanf("%d",&num);
    int arr[num],large=0,diff=0;
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++)
    {
        for(int j=num-1;j>=0;j--)
        {
            if(i==j)
            {
                continue;
            }
            if(arr[i]==arr[j])
            {
                diff=j-i;
            }
            if(diff>large)
        {
            large=diff;
        }
        }
        
    }
    printf("%d",large);
return 0;
}
