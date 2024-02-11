#include<stdio.h>
void main()
{
  int n,i,c=0;
  printf("Enter the num : ");
  scanf("%d",&n);
  for(i=1;i<(n/2);i++)
  {
    if(n%i==0)
    {
      c++;
    }
  }

  if(c<=1)
  printf("the number is prime");
  else
  printf("Number is not a prime num");
}
