#include<stdio.h>
void main() {
  int n,i;
  printf("Enter the length of the string : ");
  scanf("%d",&n);
  char arr[n],t;
//  for(i=0;i<n;i++)
//  {
    scanf("%s",&arr);
//  }
  for(i=0;i<n/2;i++)
  {
    t=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=t;
  }
  for(i=0;i<n;i++)
  {
    printf("%c",arr[i]);
  }
  printf("\n%s\n",arr);
}
