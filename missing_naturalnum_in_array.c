#include<stdio.h>
#include<stdlib.h>
void missingnum(int *p,int n)
{
  int k=0,j;
  /*printf("\nMissing elements are : \n ");
  for(j=i,k=0;j<n;j++,k++)
  printf("%d",p[j+k]);*/
  int i;
  for(i=0;i<n;i++)
  {
    if(p[i+1]-p[i]!=1)
    break;
  }
  j=0;
  while(j<i+p[i+1]-p[i]-2){
  printf("%d\n",p[i]+j);
  j++;}
  p=NULL;
  free(p);
}
void main()
{
  int n,i,j,k,l;
  printf("enter the size of the array : ");
  scanf("%d",&n);
  int *p,*q;
  p=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  scanf("%d",&p[i]);
  printf("\n\n");
  /*for(i=0;i<n;i++)
  printf("%d",p[i]);
  /*for(i=0;i<n;i++)
  {
    if(p[i+1]-p[i]!=1)
    break;
  }*/
//  printf("\n\n%d elements are missing",p[i+1]-p[i]-1);
  /*q=(int *)malloc((n+(i-1))*sizeof(int));
  for(j=0;j<=i;j++)
  q[j]=p[i+j];
  for(k=j;k<j+(p[i+1]-p[i]-1);k++){
    l=1;
  q[k]=p[i]+l;
  l++;}
  for(j=k;j<n;j++){
    l=0;
  q[j]=p[i+l];
  l++;}
  for(i=0;i<n;i++)
  printf("%d",p[i]);*/
  missingnum(p,n);
  p=NULL;
//  q=NULL;
  free(p);
///  free(q);

}
