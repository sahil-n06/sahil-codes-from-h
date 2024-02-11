#include<stdio.h>
double myPow(double x, int y){
    double p=1,l;
    if(y<0)
    {
        y=y*(-1);
        l=myPow(x,y);
        return 1/l;
    }
    else{
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
    return 0;
}
void main()
{
  int n,p;
  printf("ENter the nuumber : ");
  scanf("%d",&n);
  printf("ENter the pow : ");
  scanf("%d",&p);
  float t;
  t=myPow(n,p);
  printf("Answer is : %f",t);
}
