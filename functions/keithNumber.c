#include <stdio.h>
#include <string.h>

int keith(int arr[],int num) {
    int i = 2;
    int sum = 0;

    while(sum <=num) {
        sum = arr[i] + arr[i-1] + arr[i-2];
        i++;
        arr[i] = sum;
        if (sum > num) {
            printf("Not a keith number ");
            printf("%d",sum);
            return 0;
        }
        if (sum == num) {
            printf("Keith number");
            return 0;
        }
        arr[i+1] = sum;
    }
} 

int main()
{
    int num;
    scanf("%d",&num);
    char arr[100];
    int sum[100];
    sprintf(arr,"%d",num);
    for(int i=0;i<strlen(arr);i++) {
        sum[i] = arr[i] - '0'; 
    }
    keith(sum,num);

    return 0;
}
