#include <bits/stdc++.h> 
using namespace std;
long long ans=0;
void merge(int left, int mid, int right, long long *arr){
    vector<long long>temp(right-left+1);
    int i=left;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j])
        temp[k++]=arr[j++];
        else{
            int size=right-j+1;
            ans+=size;
            temp[k++]=arr[i++];
        }
    }
    while(i<=mid)
    temp[k++]=arr[i++];
    while(j<=right)
    temp[k++]=arr[j++];
    for(int t=left; t<=right; t++){
        arr[t]=temp[t-left];
    }
}
void mergeSort(int left, int right, long long *arr){
    cout<<left<<" "<<right<<endl;
    // return ;
    if(left==right or right<left){
        return;
    }
    if(left<right){
        int mid=(left+right)/2;
        mergeSort(left,mid,arr);
        mergeSort(mid+1,right,arr);
        merge(left,mid,right,arr);
    }
 
}
long long getInversions(long long *arr, int n){
    mergeSort(0,n-1,arr);
    return ans;
}

int main(){
    int n=5;
    long long ar[]={2,5,1,3,4};
    cout<<getInversions(ar,n);
}