#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,x,y,z,p;
  printf("enter the x^2 :");
  scanf("%d",&a);
  printf("enter the x :");
  scanf("%d",&b);
  printf("enter the real value :");
  scanf("%d",&c);
  x=(b*b)-(4*a*c);
  y=2*a;
  p=sqrt(x);
  if(x<=0)
{
  switch(x)
  {
    case 0:
    printf("the roots are real and equal %d %d",-b/y,-b/y);
    break;
    default:
  printf("imaginary roots");
  }
}
  else
  {
    printf("the roots are real and unequal %d %d",(b+p)/y,(b-p)/y);
  }
    return 0;
}
