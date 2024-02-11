#include<stdio.h>
int rev(int n){
  int t=0,r;
  while(n!=0)
  {
    r=n%10;
    t=t*10+r;
    n=n/10;
  }
  return t;
}
long long int power(int x,int y)
{
  long long int p=1;
  if(y==0)
  return 1;
  while(x>0)
  {
    if(y%2==0)
    {
      x=x*x;
      y=y/2;
    }
    else
    {
      p=p*x;
      y--;
    }
  }
  return p;
}
void main()
{
  int x,t;
  long long int w;
  printf("Enter number : ");
  scanf("%d",&x);
  t=rev(x);
  w=power(x,t);
  if(w<1000000007)
  printf("%lld",w);
  else
  printf("%d",w%1000000007);
}
