#include<iostream>
using namespace std;

int main(){
    int arr[5]= {1,2,3,4,5};
    int *ptr = (arr+1);
    cout<<ptr<<endl;
    cout<<*ptr<<endl; // 2
    *ptr++;           
    cout<<*ptr<<endl; //3
    *ptr--;
    cout<<*ptr<<endl; //2

}