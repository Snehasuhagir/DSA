#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    int k=3;
    k=k%n;
    int ansarr[5];
    int j=0;
    //inserting last k elements
    for(int i=n-k;i<n;i++){
        ansarr[j]=a[i];
        j++;
    }
    //inserting starting  elements
    for(int i=0;i<=n-k;i++){
        ansarr[j]=a[i];
        j++;
    }
    //print
    for(int i=0;i<n;i++){
        cout<<ansarr[i]<<" ";
    }
    return 0;
}