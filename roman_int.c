#include<stdio.h>
void main()
{
  int n,i,sum=0,j,t;
  printf("ENter the number of alphabets : ");
  scanf("%d",&n);
  char arr[n];
  printf("Enter the number in roman : ");
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
    if(arr[i]=='M')
      sum=sum+1000;
    if(arr[i]=='D')
    sum=sum+500;
    if(arr[i]=='C'&&arr[i+1]=='D')
    sum=sum-100;
    else if(arr[i]=='C'&&arr[i+1]=='M')
    sum=sum-100;
    else
    sum=sum+100;
    if(arr[i]=='L'&&arr[i+1]=='D')
    sum=sum-50;
    else if(arr[i]=='L'&&arr[i+1]=='M')
    sum=sum-50;
    else if(arr[i]=='L'&&arr[i+1]=='C')
    sum=sum-50;
    else
    sum=sum+50;
    if(arr[i]=='X'&&arr[i+1]=='D')
    sum=sum-10;
    else if(arr[i]=='X'&&arr[i+1]=='M')
    sum=sum-10;
    else if(arr[i]=='X'&&arr[i+1]=='C')
    sum=sum-10;
    else if(arr[i]=='X'&&arr[i+1]=='L')
    sum=sum-10;
    else
    sum=sum+10;
    if(arr[i]=='V'&&arr[i+1]=='D')
    sum=sum-5;
    else if(arr[i]=='V'&&arr[i+1]=='M')
    sum=sum-5;
    else if(arr[i]=='V'&&arr[i+1]=='C')
    sum=sum-5;
    else if(arr[i]=='V'&&arr[i+1]=='L')
    sum=sum-5;
    else if(arr[i]=='V'&&arr[i+1]=='X')
    sum=sum-5;
    else
    sum=sum+5;
    if(arr[i]=='I'&&arr[i+1]=='D')
    sum=sum-1;
    else if(arr[i]=='I'&&arr[i+1]=='M')
    sum=sum-1;
    else if(arr[i]=='I'&&arr[i+1]=='C')
    sum=sum-1;
    else if(arr[i]=='I'&&arr[i+1]=='L')
    sum=sum-1;
    else if(arr[i]=='I'&&arr[i+1]=='X')
    sum=sum-1;
    else if(arr[i]=='I'&&arr[i+1]=='V')
    sum=sum-1;
    else
    sum=sum+1;
    printf("%d",sum);
}
