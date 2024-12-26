#include <stdio.h>
#include<string.h>
int main() {
   char str[4],arr[4],temp[2];
   scanf("%s",str);
   int a=0,b=0,c=0,count=0;
   for(int i=0;i<strlen(str);i++)
   {
       if(str[i]>'2')
       {
           count++;
       }
   }
  if(count>=4)
  {
      return 0;
  }
  for(int j=0;j<4;j++)
  {
      if(str[j]=='2')
      {
          str[j]=' ';
          arr[0]='2';
           a=10;
          break;
      }
  }

  if(a==0)
  {
       for(int j=0;j<4;j++)
  {
      if(str[j]=='1')
      {
          str[j]=' ';
          arr[0]='1';
           a=10;
          break;
      }
  }
  }
  if(a==0)
  {
      arr[0]='0';
  }
    //printf("%c",arr[0]); 
   for(int j=0;j<4;j++)
  {
      if(str[j]=='3')
      {
          str[j]=' ';
          arr[1]='3';
           b=10;
          break;
      }
  }
  if(b==0){
   for(int j=0;j<4;j++)
  {
      if(str[j]=='2')
      {
          str[j]=' ';
          arr[1]='2';
           b=10;
          break;
      }
  }
       for(int j=0;j<4;j++)
  {
      if(str[j]=='1')
      {
          str[j]=' ';
          arr[1]='1';
           b=10;
          break;
      }
  }
  }
  if(b==0)
  {
      arr[1]='0';
  }
   printf("%c%c:",arr[0],arr[1]);
   arr[3]='\0';
  for(int i=0;i<strlen(str);i++)
  {
      if(str[i]==' ')
      {
          continue;
      }
      temp[c]=str[i];
      c++;
  }
 
if(temp[1]>temp[0]&&temp[1]<='5')
{
    printf("%c%c",temp[1],temp[0]);
}
else
{
    printf("%c%c",temp[0],temp[1]);
}

    return 0;
}
