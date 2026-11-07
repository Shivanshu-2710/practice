#include <iostream>
using namespace std;

bool containsDuplicate(int *arr,int n){
    int alpha_count=0;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int nums[]={1,2,3,4,5};
    int n=sizeof(nums)/sizeof(int);
    int ans=containsDuplicate(nums,n);
    cout<<ans;
    return 0;
}