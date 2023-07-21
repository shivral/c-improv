#include <stdio.h>
#include <malloc.h>

void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void far(int *ar,int n){
    swap(&ar[0],&ar[1]);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(ar[j]>ar[i])
                swap(&ar[j],&ar[i]);
        }
    }
}

void print(int *ar ,int n){
    for(int i=0;i<n;i++)
        printf("id=%d val=%d\n",i,ar[i]);
}

int main(){
    int sz;
    scanf("%d",&sz);
    int * ar=calloc(sz,sizeof(int));
    // int ar[sz];
    for(int i=0;i<sz;i++){
        scanf("%d",&ar[i]);
    }
    
    far(ar,sz);
    print(ar,sz);

}