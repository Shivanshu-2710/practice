#include <iostream>
using namespace std;

int func(int *arr,int n){
    int count=0;
    int evencount=0;
    for(int i=0;i<n;i++){
        int a=arr[i];
        while (a>0){
            a=a/10;
            count+=1;
        }
        if (count%2==0){
            evencount+=1;
        }
    }
    return evencount;
}

int main(){
    int nums[]={555,901,482,1771};
    int n=sizeof(nums)/sizeof(int);
    int ans=func(nums,n);
    cout<<ans;
    return 0;
}