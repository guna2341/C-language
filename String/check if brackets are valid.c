#include <stdio.h>
#include<string.h>
#define size 4
int top=-1;
char arr[100];

void push(char b)
{
top=top+1;
arr[top]=b;

}
 void pop()
 {
     top=top-1;
  }


int main() {
 
 char ch[100],open[50],temp[50];
 int op=0,cl=0,flag=0,count=0;
 scanf("%s",ch);
for(int i=0;i<strlen(ch);i++)
{
if(ch[i]=='('||ch[i]=='{'||ch[i]=='[')
{
    push(ch[i]);
}
    if(ch[i]==']'||ch[i]=='}'||ch[i]==')')
    {
       // printf("%c %c\n",ch[i],arr[top]);
        if(arr[top]=='{'&&ch[i]=='}')
        {
           pop();
        }
          else if(arr[top]=='['&&ch[i]==']')
        {
            pop();
        }
        else   if(arr[top]=='('&&ch[i]==')')
        {
           pop();
        }
        else
        {
            printf("False");
            return 0;
        }
    }
}
printf("True");

    return 0;
}
