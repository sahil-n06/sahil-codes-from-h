#include<stdio.h>
#include<stdlib.h>
int remove1(int *p,int n)
{
  int c=0,temp[n],j=0,i,t;
  for(i=0;i<n-1;i++)
  {
   // t=p[i];
   // j=i;
    temp[j]=p[i];
    j++;
    if(p[i]==p[i+1])
    {
     // i++;
      continue;
     }
     //temp[j]=p[i];
     //j++;
  }
  for(i=0;i<n;i++)
  p[i]=temp[i];
  return n;
  /*int temp[n],i,j;
  temp[0]=p[0];
  for(i=0;i<n;i++)
  {
      if(p[i]!=p[i])
      {j=0;
      temp[j]=p[i];
      j++;
      }

  else
  i++;
  }
  for(i=0;i<n;i++)
  p[i]=temp[i];*/
}
void main()
{
  int n,t,i;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  int *p;
  p=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
    scanf("%d",&p[i]);
  }
  t=remove1(p,n);
  for(i=0;i<t;i++)
  printf("\n%d",p[i]);
  p=NULL;
  free(p);
}
