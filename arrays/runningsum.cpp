#include <iostream>
using namespace std;

void output(int *arr,int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int runningSum(int *arr,int n){
    int runningSum[n]={0};
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
        runningSum[i]=sum;
    }
    output(runningSum,n);
}

int main(){
    int nums[]={1,2,3,4};
    int n=sizeof(nums)/sizeof(int);
    runningSum(nums,n);
    return 0;
}