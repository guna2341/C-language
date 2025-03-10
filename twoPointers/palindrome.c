
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s",arr);
    int l=0, r=strlen(arr)-1;
    while (l != r) {
        if (arr[l] != arr[r]) {
            printf("Not a palindrome");
            return 0;
        }
        l++;
        r--;
    }
    
    printf("Palindrome");
    return 0;
}
