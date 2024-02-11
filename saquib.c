#include<stdio.h>
int series(int n,int x)
{
  if(n==0)
  return x;
  else
  return series(n-1,x);
}
void main()
{
  int x,n;
  printf("Enter the number of rows of series : ");
  scanf("%d",&n);
  printf("Enter the number : ");
  scanf("%d",&x);
  float answer;
  answer=series(n,x);
  printf("answer is %f",answer);
}
