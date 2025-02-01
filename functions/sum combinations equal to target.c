#include<stdio.h>
#include<stdlib.h>

int calculateSum(int sub[],int subSize) {
    int sum = 0;
    for(int i=0;i<subSize;i++){
        sum += sub[i];
    }
    return sum;
}

int Subset(int arr[],int sum,int **res,int subSize,int index,int n,int *resSize,int sub[]){
    if (calculateSum(sub,subSize) == sum) {
        res[*resSize] = (int *)malloc(subSize+1 * sizeof(int));
        for(int i=0;i<subSize;i++) {
            res[*resSize][i] = sub[i];
        }
        res[*resSize][subSize] = -1;
        (*resSize)++;
        return 0;
    }
    for(int i=index;i<n;i++) {
        sub[subSize] = arr[i];
        subSize++;
        Subset(arr,sum,res,subSize,i+1,n,resSize,sub);
        subSize--;
    }
}

int main() {
    int arr[] = {1,2,1};
    int *sub = (int *)malloc(3 * sizeof(int));
    int sum = 3;
    int **res = (int **)malloc(100 * sizeof(int *));
    int resSize = 0;
    int subSize = 0;
    Subset(arr,sum,res,subSize,0,3,&resSize,sub);
    for(int i=0;i<resSize;i++){
        for(int j=0;j<3;j++){
            if (res[i][j] == -1){
                break;
            }
            printf("%d",res[i][j]);
        }
        printf("\n");
    }
    
        for (int i = 0; i < resSize; i++) {
        free(res[i]);
    }
    free(res);
    free(sub);
}
