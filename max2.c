#include<stdio.h>
void main(){
  int n,i,max=0,max2=0;
  printf("Enter size of arrary : ");
  scanf("%d",&n);
  int arr[n];
  printf("enter array elemets : ");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
    if(arr[i]>max2&&arr[i]<max){
    max2=arr[i];}
  }
  printf("maximum and second maximum element is : %d and %d",max,max2);
}
