#include <stdio.h>


int fac(int n){
    static int ans=1;
    // int ans=1;
    if (n==0)
        return ans;
    ans*=n;
    fac(n-1);
    return ans;
    // fac(n-1);
}

int main(){
    int x=fac(3);
    printf("%d ans \n",x);
}