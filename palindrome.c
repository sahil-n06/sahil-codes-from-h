#include<stdio.h>
int main()
{
  int n,t,r,num;
  printf("enter a number :");
  scanf("%d",&n);
  num=n;
t=0;
while(n>0){
r=n%10;
t=t*10+r;
n=n/10;}
if(num==t)
{
  printf("palindrome");
}
else
printf("not palindrome");
return 0;

}
