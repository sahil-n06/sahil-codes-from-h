#include<stdio.h>
void main()
{
  int j,i,r;
  printf("enter the number of rows");
  scanf("%d",&r);
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=i;j++)
      printf("%d",j);
          printf("\n");}
}*/
/*#include<stdio.h>
void main()
{
  int r,i,j,c=1;
  printf("enter the number of rows");
  scanf("%d",&r);
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=i;j++)
    printf("%d ",c++);
    printf("\n");
  }
}*/
#include<stdio.h>
void main()
{
  int i,j,r;
  printf("enter the number of rows");
  scanf("%d",&r);
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=i;j++)
    printf("%d",i);
    printf("\n");
  }
}
