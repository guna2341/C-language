#include <stdio.h>
#include<string.h>
void func(char arr[3])
{
            if(arr[0]==arr[2])
            {
                printf("%c",arr[1]);
            }
            else{
                printf("%c%c%c",arr[0],arr[1],arr[2]);
            }
            return;
}
void myfunc(char arr[2])
{
    if(arr[0]==arr[1])
    {
        printf("%c",arr[0]);
    }
    else{
        printf("%s",arr);
    }
}
int main() {
    char arr[100];
    scanf("%s",arr);
    int len=strlen(arr)-1,a=0,b=len+1;
    if(strlen(arr)==1)
    {
        printf("%s",arr);
        return 0;
    }
   if(strlen(arr)==3)
   {
       func(arr);
       return 0;
   }
   if(strlen(arr)==2)
   {
       myfunc(arr);
       return 0;
   }
    for(int i=0;i<len+1;i++)
    {
        if(arr[i]==arr[len])
        {
            if(arr[i]==arr[i+1])
            {
                i=i+1;
            }
            else if(arr[len]==arr[len-1])
            {
                len=len-1;
            }
        }
        if(arr[i]!=arr[len])
            {
                    a=i;
                    b=len;
                break;
            }
            len=len-1;
            if(i-len==1)
        {
            printf("0");
            return 0;
        }
       
    }
for(int i=a;i<=b;i++)
{
    printf("%c",arr[i]);
}
    return 0;
}
