#include<stdio.h>
int main(){
    int num,temp,target,a,b,c,d,e,f,flag=0;
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
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<num;i++)
    {   
         if(a==arr[i])
            {
                continue;
            }
        if(arr[i]==target)
        {
            a=arr[i];
            printf("[%d]",arr[i]);
            flag=10;
        }
        for(int j=i+1;j<num;j++)
        {
            if(b==arr[i]||c==arr[j])
            {
                continue;
            }
            if(arr[i]+arr[j]==target)
            {
                b=arr[i],c=arr[j];
                printf("[%d %d]",arr[i],arr[j]);
                flag=10;
                }
            for(int k=j+1;k<num;k++)
            {
                if(d==arr[i]||e==arr[j]||f==arr[k])
                {
                    continue;
                }
                if(arr[i]+arr[j]+arr[k]==target)
                {
                    d=arr[i],e=arr[j],f=arr[k];
                    printf("[%d %d %d]",arr[i],arr[j],arr[k]);
                    flag=10;
                }
            }
        }
    }
    if(flag!=10)
    {
        printf("No valid combinations found");
    }
    return 0;
}
