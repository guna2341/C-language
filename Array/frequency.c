#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter size:");
    scanf("%d",&num);
    if(num==0)
    {
        printf("Invalid Input");
        return 0;
    }
    int arr[num];
    for(int i=0;i<num;i++)
    {    
        scanf("%d",&arr[i]);
        if(arr[i]>0&&arr[i]<=999999)
        {
            
        }
        else
        {
            printf("Invalid Input");
            return 0;
        }
    }
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                if(arr[j]==' ')
                {
                    continue;
                }
                arr[j]=' ';
                count++;
            }
        }
        if(arr[i]!=32)
        {
        printf("%d occurs:%d times",arr[i],count+1);
        count=0;
        printf("\n");
    }
    }
return 0;
}
