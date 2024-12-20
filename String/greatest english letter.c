#include <stdio.h>
#include<string.h>
int main() {
    
    char arr1[100],arr2[100];
    scanf("%[^\n]s",arr1);
    int count=0;
    for(int i=0;i<strlen(arr1);i++)
    {
        for(int j=0;j<strlen(arr1);j++)
        {
            
            if(arr1[i]==arr1[j]+32)
            {
                arr2[count++]=arr1[j];
            }
        }
    }
arr2[count]='\0';
char large=0;
for(int i=0;i<strlen(arr2);i++)
{
    if(large<arr2[i])
    {
        large=arr2[i];
    }
}
if(large==0)
{
    printf(" \"\" ");
    return 0;
}
printf("%c",large);
    return 0;
}
