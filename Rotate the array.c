#include<stdio.h>
int main(){
    
    int num;
    scanf("%d",&num);
    int arr[num],rotate;
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter rotation value:");
    scanf("%d",&rotate);
    
    for(int i=num-rotate;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<num-rotate;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}
