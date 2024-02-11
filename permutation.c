#include<stdio.h>
int per(char a,char b,char c,char d)
{
  if(a==d)
  printf("%c%c%c%c",a,c,b,d);
  else
  {
    // per(b,c,d,a);
    printf("%c%c%c%c",a,b,c,d);
    per(c,d,a,b);
  }
}
void main()
{
  char a,b,c,d;

  printf("Enter the char ;");
  scanf("%c %c %c %c",&a,&b,&c,&d);
  per(a,b,c,d);
}
