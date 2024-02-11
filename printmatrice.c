#include<stdio.h>
int main()
{
  int r,c,i,j;
  printf("ENter the size of the first matrice row : ");
  scanf("%d",&r);
  printf("enter the size of the first matrice column : ");
  scanf("%d",&c);
  int arr[r][c];
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("enter a%d%d element : ",i+1,j+1);
      scanf("%d",&arr[i][j]);
    }
  }
  /*for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }*/
  int r1,c1;
  printf("ENter the size of the second matrice row : ");
  scanf("%d",&r1);
  printf("enter the size of the second matrice column : ");
  scanf("%d",&c1);
  int arra[r1][c1];
  for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
      printf("enter a%d%d element : ",i+1,j+1);
      scanf("%d",&arra[i][j]);
    }
  }
  printf("The first matrice : \n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  printf("The second matrice : \n");
  for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
      printf("%d ",arra[i][j]);
    }
    printf("\n");
  }
  return 0;
}
