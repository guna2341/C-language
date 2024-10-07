#include <stdio.h>

int main() {
  int num,count=0;
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
         if(j==i)
         {
             continue;
         }
         else if(arr[j]<arr[i])
         {
             count++;
         }
     }
     printf("Element %d :%d",arr[i],count);
     printf("\n");
     count=0;
 }

    return 0;
}
