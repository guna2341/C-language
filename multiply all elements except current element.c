#include<stdio.h>
int main(){
    
    int num,sum=1;
    printf("Enter size:");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                sum=sum*arr[j];
            }
        }
        printf("%d ",sum);
        sum=1;
    }
    
return 0;
}

