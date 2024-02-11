#include<stdio.h>
void main()
{
  int i,c=1,a=1,sum=0,j,n=1;
  if(a<=100)
  {
    for(j=1;j<=n;j++)
    {
      sum=0;
      c=j;
      for(i=1;i<j;i++)
      {
        if(j%i==0)
        {
          sum=sum+i;
        }
      }
      n++;
      if(sum==c){
        printf("%d",sum);
        printf("\n");
        a++;
      }
    }
  }
}
/* arguments
  /* code */
/*
#include<stdio.h>
void main()
{
  int n=100,i,t,sum=0,j,c=1;
  for(j=1;j<=n;j++)
  {
    c=j;
    for(i=1;i<j;i++)
    {
      t=j%i;
      if(t==0)
      {
      sum=sum+i;
      }
    }
  if(sum==c){
  printf("%d",sum);
  n++;
  printf("/n");
}
  }
}*/
