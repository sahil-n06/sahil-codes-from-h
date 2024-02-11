#include<stdio.h>
#include<stdlib.h>
int digitCount(int *arr,int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i])
        max=arr[i];
    }
    return max;
}
int count_digit(int n){
    int c=0;
    while(n!=0){
        n=n/10;
        c++;
    }
    return c;
}
void countsort(int *arr,int n,int pos){
    int op[n-1];
    int count[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<n;i++){
        count[arr[i]/pos%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        op[--count[arr[i]/pos%10]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=op[i];
    }

}
void radixsort(int *arr,int n){
    int pos=1;
    int max_digit=digitCount(arr,n);
    int digit=count_digit(max_digit);

    for(int i=0;i<digit;i++){
        countsort(arr,n,pos);
        pos*=10;
    }
    
}
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    radixsort(arr,n);
    for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
    return 0;
}