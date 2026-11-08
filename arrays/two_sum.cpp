#include <iostream>
using namespace std;

void twoSums(int *arr,int n,int target){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]+arr[j]==target){
                cout<<i<<" "<<j;
            }
        }
    }
}

int main(){
    int nums[]={3,2,4};
    int n=sizeof(nums)/sizeof(int);
    int target=6;
    twoSums(nums,n,target);
    return 0;
}