#include <stdio.h>

int main()
{
    int n,i,c;
    printf("enter the number :");
    scanf("%d",&n);
    i=1;
    if((n%2)%i==0)
    {
      i++;
    printf("not a prime");

    }

    else
    {
        printf("it is a prime number");}



    return 0;

}
