#include <stdio.h>

int main() {
    
    int num,sort[10],tem[10],temp,rem,count=0,result=0,a=0,let=0;
    printf("Enter size:");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++)
    {
        temp=arr[i];
        while(rem!=0)
        {
        
            rem=temp%10;
            temp=temp/10;
            if(rem!=0)
            {
            a++;
            }
            if(rem!=0)
            {
                tem[count]=rem;
                count++;
            }
            
        }
        for(int i=a-1;i>=0;i--)
        {
            sort[let]=tem[i];
            let++;
        }
       
        result=result+a;
        rem=1;
        a=0;
        count=0;
    }
    for(int i=0;i<result;i++)
    {
        printf("%d",sort[i]);
           if(i<result-1)
        {
         printf(",");   
        }
    }
    return 0;
}
