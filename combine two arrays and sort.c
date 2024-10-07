#include<stdio.h>
int main(){
    
    int  num1,num2,count=0,temp;
    printf("Enter size of arr1:");
    scanf("%d",&num1);
      int arr1[num1],arr2[num2],arr3[num1+num2];
    for(int i=0;i<num1;i++)
    {
        scanf("%d",&arr1[i]);
      
    }
  

    
    for(int i=0;i<num1;i++)
    {
         arr3[i]=arr1[i];
          
      
    }
        printf("Enter size of arr2:");
    scanf("%d",&num2);
      for(int i=0;i<num2;i++)
    {
        scanf("%d",&arr2[i]);
       
    }
    for(int i=num1;i<num1+num2;i++)
    {
        arr3[i]=arr2[count];
        count++;
    }
    for(int i=0;i<num1+num2;i++)
    {
        for(int j=i+1;j<num1+num2;j++)
        {
            if(arr3[i]>arr3[j])
            {
                temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    for(int i=0;i<num1+num2;i++)
    {
        printf("%d ",arr3[i]);
    }
    
return 0;
}
