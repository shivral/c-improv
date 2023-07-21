#include <stdio.h>
#include <malloc.h>
typedef struct name{
    int id;
}name;

void val(name * ar,int n){
    for(int i=0;i<n;i++){
        name st={i};
        ar[i]=st;
    }
}

void printName(name *ar,int n){
    for(int i=0;i<n;i++){
        printf("%d vla\n",ar[i].id);
        ar[i].id+=1;
    }
}

int main(){
    name * ar=calloc(2,sizeof(name));
    val(ar,2);
    printName(ar,2);
    printName(ar,2);
}