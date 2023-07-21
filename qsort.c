#include <stdio.h>

void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int  getPiv(int * arr,int lo,int hi){
    int pivot=arr[hi];
    int i=lo-1;
    for(int j=lo;j<hi;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[j],&arr[i]);
        }
    }
    swap(&arr[i+1],&arr[hi]);
    return i+1;
}

void qsort(int* arr,int lo,int hi ){
    if(lo<hi){
        int p=getPiv(arr,lo,hi);
        qsort(arr,lo,p-1);
        qsort(arr,p+1,hi);
    }
}



void insSort(int *arr,int n){
    for(int i=1;i<n;i++){
        int key=arr[i],j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}


void 


int main(){
    int ar[]={32,1,2,45,2};
    int sz=sizeof(ar)/sizeof(int);
    // qsort(ar,0,sz-1);
    insSort(ar,sz);
    for(int i=0;i<sz;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
}