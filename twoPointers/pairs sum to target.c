
#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int l=0,r=4,target = 14;
    
    while (l<=r) {
        if (l == r) {
            printf("Target not found");
            return 0;
        }
        if (arr[l] + arr[r] == target) {
            printf("%d %d",arr[l],arr[r]);
            return 0;
        }
        if (arr[l] + arr[r] < target) {
            l++;
        }
        else {
            r--;
        }

    }
    
    return 0;
}
