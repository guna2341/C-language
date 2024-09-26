#include <stdio.h>

int main() {
    int r,c,num=0;
    printf("Enter no of rows:");
    scanf("%d",&r);
    printf("Enter no columns:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter %d element:",i+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    
    {
        for(int j=0;j<c;j++)
        {
           if(arr[i][j]!=arr[j][i])
           {
              
               num=0;
               break;
           }
           else
           {
               num=1;
           }
        }
        if(num==0)
        {
             printf("It is not a symmetric matrix");
            break;
        }
    }
    if(num==1)
    {
        printf("It is a symmetric matrix");
    }
    
    return 0;
}
