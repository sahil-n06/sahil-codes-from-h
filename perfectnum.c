#include<stdio.h>
void main()
{
  int n,i,t,sum=0;
  printf("Enter the number :");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
    t=n%i;
    if(t==0)
    {
      sum=sum+i;
    }
  }
  if(sum==n)
  printf("%d is a perfect number",n);
  else
  printf("%d is not a perfect number ",n);
}
