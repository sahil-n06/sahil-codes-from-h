#include<stdio.h>
int main(){
  int m,n;
  printf("enter the row size : ");
  scanf("%d",&m);
  printf("enter the column size : ");
  scanf("%d",&n);
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("%d",arr[i][j]);
    }
    printf("\n");
  }
  int arr1[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      arr1[i][j]=arr[m-i][n-j]*arr[m][n]+arr[m-i][m]*arr[n-j][n];
    }
  }
  printf("A^-1 of the matrix : \n");
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("%d     ",arr1[i][j]);
    }
    printf("\n");
  }
  return 0;
}
