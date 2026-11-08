#include <iostream>
using namespace std;

int output(int *arr,int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int removeElement(int *arr,int n,int val){
    int tempArr[n]={0};
    int count=0;
    for (int i=0;i<n;i++){
        if (!(arr[i]==val)){
            tempArr[count]=arr[i];
            count+=1;
        }
    }
    for (int i=0;i<n;i++){
        arr[i]=tempArr[i];
    }
    output(arr,n);
    cout<<count;
}

int main(){
    int nums[]={3,2,2,3};
    int n=sizeof(nums)/sizeof(int);
    int val=3;
    removeElement(nums,n,val);
    return 0;
}