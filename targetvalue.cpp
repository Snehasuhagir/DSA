#include<iostream>
using namespace std;

bool target_value(int *arr,int n,int i,int x){
    //base case
    if(i==n){
        return false;
    }

    return arr[i]==x || target_value(arr,n,i+1,x);
}
int main(){
   int arr[] = {1,3,6,-6,5};
   int n=5;
   int x=-6;
   bool result = target_value(arr,n,0,x);
   if(result) {
    cout<<"YES";
   }
   else{
   cout<<"NO";
}
}