#include<stdio.h>
long long int powe(int x,int y)
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
  int x,y;
  long long int t;
  float l;
  printf("Enter a number : ");
  scanf("%d",&x);
  printf("Enter power : ");
  scanf("%d",&y);
  if(y<0){
  y=y*(-1);
  l=powe(x,y);
  printf("%f",1/l);}
  else
  {
    printf("%lld",powe(x,y));
  }
}
