#include<iostream>
using namespace std;
int main(){

    int arr[2]={2,6};
    int *ptr1 = &arr[0];
    //postfix
    
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    cout<<*ptr1++<<"  "<<"*ptr1 :"<<*ptr1<<endl;
    cout<<arr[0]<<" "<<arr[1]<<endl;;
    cout<<(*ptr1)++<<"  "<<"*ptr1 :"<<*ptr1<<endl;
    cout<<arr[0]<<" "<<arr[1];
    
    //prefix
   /*cout<<ptr1<<"  "<<*ptr1<<endl;  // address of arr[0]  ,  2
    cout<<*++ptr1<<" "<<*ptr1<<endl;  // 6  ,  6
    cout<<arr[0]<<" "<<arr[1]<<endl; // 2  ,  6
    cout<<++*ptr1<<"  "<<*ptr1<<endl; // 7  ,  7
    cout<<arr[0]<<" "<<arr[1]<<endl; // 2  ,  7
*/

}