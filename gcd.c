#include <stdio.h>

void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int gcd(int a,int b){
    if(a>b)
        swap(&a,&b);
    
    if(a==0)
        return b;
    
    return gcd(b%a,a);
}


int factorial(int n){
    if(n==1)
        return 1;
    
    return n*factorial(n-1);
}

int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}

int main(){
    printf("%d \nfactorial %d\nfib %d\n",gcd(6,3),factorial(4),fib(4));
    for(int i=0;i<10;i++){
        printf("id = %d fib=%d\n",i,fib(i));
    }
}