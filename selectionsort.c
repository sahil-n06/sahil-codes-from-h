#include<stdio.h>
int main()
{
  int n,i,j,t,min;
  printf("enter the lenght of array : ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    printf("enter the number :");
    scanf("%d",&arr[i]);
  }

  for(i=0;i<n;i++)
  {
    min=i;
    for(j=i+1;j<n;j++){
    if(arr[min]>arr[j])
    {
      min=j;
    }
  }
      t=arr[i];
      arr[i]=arr[min];
      arr[min]=t;
      }
for(i=0;i<n;i++)
printf("\t%d",arr[i]);
return 0;
}
