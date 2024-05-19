#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,7,9,3,8,3,4,9,2,7};
    int size=11;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}