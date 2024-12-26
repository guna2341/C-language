#include <stdio.h>
#include<string.h>
int main() {
    char str[100],arr[100][100],temp[100],dup[100];
    scanf("%[^\n]s",str);
    int j=0,k=0,m=0,a=0,b=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            arr[j][k]='\0';
            j++;
            k=0;
        }
        else
        {
            arr[j][k]=str[i];
            k++;
        }
    }
    arr[j][k]='\0';
    int d=0;
    for(int i=0;i<=j;i++)
    {
        strcpy(temp,arr[i]);
        for(int n=i+1;n<=j;n++)
        {
          int res=strcmp(temp,arr[n]);
          if(res==0)
          {
              for(int m=0;m<strlen(arr[n]);m++)
              {
                  arr[n][m]='0';
              }
          }
        }
    }
      int num=0;
        for(int i=0;i<=j;i++)
        {
            num=0;
            for(int m=0;m<strlen(arr[i]);m++)
            {
                if(arr[i][m]=='0')
                {
                   num=10;
                    continue;
                }
            }
            if(num!=10)
            {
                printf("%s ",arr[i]);
            }
        }
    return 0;
}
