#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int count =0;
    int targetsum = 7;
    for(int i=0;i<7;i++){
       
        for(int j=i+1;j<7;j++){
            if(arr[i]+arr[j]==targetsum){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}