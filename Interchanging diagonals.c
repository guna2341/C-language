#include <stdio.h>

int main() {
  
  int row,col,temp;
  printf("Enter the no of rows and columns:");
  scanf("%d %d",&row,&col);
  int arr[row][col];
  for(int i=0;i<row;i++)
  {
      for(int j=0;j<col;j++)
      {
          printf("Enter the element of %d row and %d column:",i+1,j+1);
          scanf("%d",&arr[i][j]);
      }
  }
  for(int i=0;i<row;i++)
  {
      for(int j=0;j<col;j++)
      {
          printf("%d",arr[i][j]);
      }
      printf("\n");
  }
temp=arr[0][0];
arr[0][0]=arr[0][col-1];
arr[0][col-1]=temp;
temp=arr[row-1][col-1];
arr[row-1][col-1]=arr[row-1][0];
arr[row-1][0]=temp;
printf("\n");
for(int i=0;i<row;i++)
  {
      for(int j=0;j<col;j++)
      {
          printf("%d",arr[i][j]);
      }
      printf("\n");
  }
    return 0;
}
