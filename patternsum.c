
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a number :");
    scanf("%d",&n);
    int s=0;
    while(n>0)
    {
      i=n%10;
      n=n/10;
      s=i+s;
    }
    printf("%d\n",s);
    return 0;
  }
