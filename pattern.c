#include <stdio.h>
void main()
{
  int a,b;
  printf("enter number of rows :");
  scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
      for(  int k=i;k<=a;k++)
      {
        printf(" ");
      }
      for(int j=1;j<=i;j++)
      {
            printf("* ");
      }
        printf("\n");
    }
}
