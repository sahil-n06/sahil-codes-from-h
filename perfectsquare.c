#include<stdio.h>
int PerfectSquare(int n){
  int sum=0,t;
  while(n!=0){
    t=n%10;
    sum=sum+t;
    n=n/10;
  }
  while(sum!=0){
    t=sum%10;
    n=n+t;
    sum=sum/10;
  }
  // if(sum>10)
  // PerfectSquare(sum);
  // else
  // return n;
  // return sum;
  printf("%d\n",n);

  return 0;
}
void main(){
  int n,t;
  printf("Enter the number : ");
  scanf("%d",&n);
  t=PerfectSquare(n);
  printf("%d",t);
}
