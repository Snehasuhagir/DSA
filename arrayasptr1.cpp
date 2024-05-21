#include<iostream>
using namespace std;
void process(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<endl;
    }
    *(arr+1)=33;
}
int main(){
    int arr[3]={5,1,2};
    int n= 3;

    process(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}