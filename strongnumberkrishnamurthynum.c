#include<stdio.h>
int fact(int t)
{
  int fact=1,i;
  for(i=1;i<=t;i++)
  {
    fact=fact*i;
  }
  return fact;
}
void main()
{
  int n,i,j,t;
  printf("Enter the number : ");
  scanf("%d",&n);
  int sum=0,s=0;
  j=n;
  while(n>0)
  {
    t=n%10;
    n=n/10;
    i=fact(t);
    sum=sum+i;
  }
  if(sum==j)
  printf("The numeber is strong number ");
  else
  printf("Number is not a  strong number ");
}
