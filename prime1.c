#include <stdio.h>
int main()
{
    int n,i,c=0;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
      if(n%i==0){
      printf("not a prime");
      c++;
      break;
    }
  }
      if(c==0)
      printf("number is prime");
    return 0;
}
