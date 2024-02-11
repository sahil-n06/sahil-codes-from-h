#include<stdio.h>
int main()
{ int n,i,j,a,b,s=0;
  printf("enter to where you want to add the nth serious :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    a=a+1/i;
  }
  for(j=2;j<=n;j=j+2){
    b=b+1/j;
  }
  s=a-b;
  printf("%d",s);
  return 0;
}
