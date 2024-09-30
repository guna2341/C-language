#include <stdio.h>

int main() {
    int num,a=0,b=0,count=0;
    scanf("%d",&num);
int alice[num];
int bob[num];
for(int i=0;i<num;i++)
{
    scanf("%d",&alice[i]);
}
for(int j=0;j<num;j++)
{
    scanf("%d",&bob[j]);
}
for(int i=0;i<num;i++)
{
    if(alice[i]>bob[i]*2)
    {
        a=1;
    }
    if(bob[i]>alice[i]*2)
    {
        b=1;
    }
    if(a==0 && b==0)
    {
        count++;
    }
    a=0;
    b=0;
}
printf("%d",count);
    return 0;
}
