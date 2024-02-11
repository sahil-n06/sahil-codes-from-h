#include <stdio.h>

int main()
{
    int i,max=0,j,sum=0,min;
    for(i=1;i<=3;i++){
        printf("enter a number :");
        scanf("%d",&j);
        sum=sum+j;
        if(max<j)
        max=j;
        if(min>j)
        min=j;
    }
    printf("smallest number is %d\n",min);
    printf("sum of  number is %d\n",sum);
    printf("difference number is %d",max-min);

    return 0;
}
