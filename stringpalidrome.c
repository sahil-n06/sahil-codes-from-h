#include<stdio.h>
void main()
{
  int c=0,k,i,j;
  printf("Enter the length of a string : ");
  scanf("%d",&k);
  char arr[k],arr1[k];
  printf("Enter string \n");
  for(i=0;i<k;i++)
  {
    scanf("%c",&arr[i]);
  }
  for(i=0,j=k-1;i<k;i++,j--)
  {
    if(arr[i]==arr[j]){
    c++;
    }
  }
  if(c==0)
  printf(" no palind");
  else
  printf(" palindrome string");
}
