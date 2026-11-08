#include <iostream>
#include <algorithm>
using namespace std;

int missingNumber(int *arr,int n){
    int tempNum=0;
    int tempArr[n]={0};
    for (int i=0;i<n;i++){
        tempArr[i]=tempNum;
        tempNum+=1;
    }
    sort(arr,arr+n);
    for (int i=0;i<n;i++){
        if (!(arr[i]==tempArr[i])){
            return tempArr[i];
        }
    }
}

int main(){
    //nums have distinct numbers
    int nums[]={9,6,4,2,3,5,7,0,1};
    int n=sizeof(nums)/sizeof(int);
    cout<<missingNumber(nums,n);
    return 0;
}