#include<iostream>
using namespace std;
int main(){
    int arr[]={3,1,2,4,0,6};
    int targetsum = 6;
    int count = 0;
    int size = 6;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
        for(int k=j+1;k<size;k++){
            if(arr[i]+arr[j]+arr[k]==targetsum){
                count++;
            }
        }
           
        }
    }
    cout<<count;
    
    return 0;
}