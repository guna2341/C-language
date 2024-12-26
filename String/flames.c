#include <stdio.h>
#include<string.h>
int main() {
    int count=7;
    int n=6;
    int index=0;
    char flames[]="flames";
    while(n>1)
    {
        index=(index+count-1)%n;
        for(int i=index;i<n-1;i++)
        {
            flames[i]=flames[i+1];
        }
        n--;
            }
            printf("%c",flames[0]);
    return 0;
}
