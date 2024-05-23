#include<iostream>
using namespace std;
int sum(int *arr,int idx,int n){
    //base case
    if(idx==n-1)return arr[idx];

    return arr[idx] + sum(arr,idx+1,n);
}
int main(){
    int arr[]={2,3,5,20,1};
    int n=5;
    cout<<sum(arr,0,n);
}