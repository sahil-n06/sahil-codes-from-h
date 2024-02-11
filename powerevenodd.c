#include<stdio.h>
long long int neg(int x,int y);
long long int powe(int x,int y);
long long int neg(int x,int y)
{
  long long int sum=0;
  y=10+y;
  y=10-y;
  sum=powe(x,y);
 // sum=1/sum;
  return sum;
}
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
  l=neg(x,y);
//  t=pow(x,y);
  printf("answer is :  %f",1/l);}
  else{
  t=powe(x,y);
  printf("answer is :  %f",t);}
}
