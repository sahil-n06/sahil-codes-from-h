#include<stdio.h>
void pascal(int arr[10][10],int r)
{
 int i,j;
 for(i=0;i<r;i++)
   {
    for(j=0;j<=i;j++)
       {
        if(i==0||j==0||j==i)
        arr[i][j]=1;
        else
        arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
       }
    }
}
void main()
{
  int r,i,j,k,c[10][10];
  printf("Enter no. of rows : ");
  scanf("%d",&r);
  pascal(c,r);
  for(i=0;i<r;i++)
  {
   for(k=0;k<r-i+1;k++)
   printf("  ");
   for(j=0;j<=i;j++)
   printf(" %d   ",c[i][j]);
   printf("\n");
  }
}
