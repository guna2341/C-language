#include <stdio.h>
#include<string.h>
int main() {
char str[100],dup[100];
char arr[100][100];
scanf("%[^\n]s",str);
scanf("\n%[^\n]s",dup);
int j=0,k=0,count=0;
for(int i=0;str[i]!='\0';i++)
{
    if(str[i]==' ')
    {
        arr[j][k]='\0';
        j++;
        k=0;
    }
    else
    {
        arr[j][k++]=str[i];
    }
}
int l=0;
for(int i=0;i<=j;i++)
{
    count=0;
    for(int m=0;m<strlen(arr[i]);m++)
    {
        if(dup[count++]==arr[i][m])
        {
            l=10;
            arr[i][m]='0';
        }
        else
        {
            l=0;
        }
    }
}
if(l==0)
{
    printf("String not found");
    return 0;
}
int a=0;
for(int i=0;i<=j;i++)
{
    a=0;
    for(int m=0;m<strlen(arr[i]);m++)
    {
     if(arr[i][m]=='0')
     {
         a=10;
         continue;
     }
    }
  if(a!=10)
  {
      printf("%s ",arr[i]);
  }
}
    return 0;
}
