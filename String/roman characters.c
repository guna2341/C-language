#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int res=0,neg=0;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
       
        if(str[i]=='I'&&str[i+1]=='V')
        {
            neg=neg-1;
            continue;
        }
        if(str[i]=='I'&&str[i+1]=='X')
        {
            neg=neg-1; continue;
        }
         if(str[i]=='X'&&str[i+1]=='L')
        {
            neg=neg-10; continue;
        }
         if(str[i]=='X'&&str[i+1]=='C')
        {
            neg=neg-10; continue;
        }
         if(str[i]=='C'&&str[i+1]=='D')
        {
            neg=neg-100; continue;
        }
          if(str[i]=='C'&&str[i+1]=='M')
        {
            neg=neg-100;continue;
        }
         if(str[i]=='I')
        {
            res=res+1; 
        }
         if(str[i]=='V')
        {
            res=res+5; 
        }
        if(str[i]=='X')
        {
            res=res+10; 
        }
         if(str[i]=='L')
        {
            res=res+50; 
        }
         if(str[i]=='C')
        {
            res=res+100; 
        }
         if(str[i]=='D')
        {
            res=res+500; 
        }
         if(str[i]=='M')
        {
            res=res+1000; 
        }
    }
    int num=res+neg;
    printf("%d",num);
    return 0;
}
