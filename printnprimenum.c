#include<stdio.h>
void main()
{
  int n,i,j,c;
  printf("Enter the nth term : ");
  scanf("%d",&n);
  for(i=1,c=0;i<n;i++)
  {
    for(j=1;j<i/2;j++)
    {
      if(i%j==0)
      c++;
    }
    if(c<=1)
    printf("%d\n",i);
  }
}
