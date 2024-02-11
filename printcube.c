#include<stdio.h>
int main()
{
 int a,b;
  char f,e;
  do{
  printf("enter a number :");
  scanf("%d",&a);
  printf("%d\n",a*a*a);
  printf("enter f to continue else press any key to exit");
  scanf("%c%c",&b,&b);
}
while(b=='f');


  return 0;
}
