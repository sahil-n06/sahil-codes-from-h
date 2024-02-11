#include<stdio.h>
void main(){
  int n,c=1;
  printf("Enter the size of the matrix n X n : ");
  scanf("%d",&n);
  int arr[n][n];
  for(int i = 0;i<n;i++){
    for(int j = 0;j < n; j++){
      arr[i][j]=c;
      c++;
    }
  }
  for(int i = 0;i<n;i++){
    for(int j = 0;j < n; j++){
      printf("%d",arr[i][j]);
    }
    printf("\n");
  }

}
