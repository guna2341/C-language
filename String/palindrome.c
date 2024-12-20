#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
   
   char arr1[100],arr2[100],arr3[100];
   scanf("%[^\n]s",arr1);
   for(int i=0;i<strlen(arr1);i++)
   {
       arr1[i]=tolower(arr1[i]);
   }
   int count=0,len=strlen(arr1)-1;
   for(int i=0;i<strlen(arr1);i++)
   {
       if(arr1[i]==' ')
       {
           continue;
       }
       arr2[count++]=arr1[i];
   }
   count=0;
   for (int i=strlen(arr2)-1;i>=0;i--)
   {
       arr3[count++]=arr2[i];
   }
  for(int i=0;i<strlen(arr2);i++)
  {
      if(arr2[i]!=arr3[i])
      {
          printf("Password is Non-Vulnerable");
          return 0;
      }
  }
  printf("Password is Vulnerable");


    return 0;
}
