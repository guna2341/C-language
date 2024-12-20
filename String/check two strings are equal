#include <stdio.h>
#include<string.h>
int main() {
   
   char arr1[100],arr2[100];
   scanf("%s",arr1);
   scanf("%s",arr2);
   int l1=strlen(arr1),l2=strlen(arr2);
   int count=0;
   for(int i=0;i<l1;i++)
   {
       if(l1!=l2)
       {
           printf("False");
           return 0;
       }
       for(int j=0;j<l2;j++)
       {
       if(arr1[i]==arr2[j])
       {
           count++;
           break;
       }
   }
}
    if(count==l1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}

