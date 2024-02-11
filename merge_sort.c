#include <stdio.h>
void merge(int arr[],int l,int m,int r) {
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int l[n1],r[n2];

    for(i=0;i<n1;i++)
        l[i]=arr[l+i];
    for (j=0;j<n2;j++)
        r[j]=arr[m+1+j];
    i=0;
    j=0;
    k=l;
    while(i<n1&&j<n2){
        if(l[i]<=r[j]){
            arr[k]=l[i];
            i++;
        } else{
            arr[k]=r[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]=l[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=r[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int l,int r) {
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void printArray(int a[],int size){
    int i;
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
    printf("\n");
}

int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printArray(arr,n);
    mergeSort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}
