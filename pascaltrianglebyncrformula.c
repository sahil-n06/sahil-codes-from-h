#include<stdio.h>
int fact(int n){
    if(n==0)
    return 1;
    else
    return n * fact(n-1);
}
int ncr(int n,int r)
{
    if(n==r||r==0)
    return 1;
    else
    return fact(n) / fact(r)* (fact(n-r));
}
int pascal(int n,int r){
    if(n==r||r==0)
    return 1;
    else
    return (ncr(n-1,r-1)+ncr(n-1,r));
}
void main()
{
    int n,r,t,i,j,k;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            printf(" ");
        }
            for(k=0;k<=i;k++){
            printf("%d ",pascal(i,k));
            }

        printf("\n");
    }
}
