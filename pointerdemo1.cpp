#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y=7;
    int *ptr1=&x;
    
    cout<<"address stored inside the ptr1 : "<<ptr1<<endl;
    cout<<"value present at the address in ptr1 : "<<*ptr1<<endl;
    int *ptr2=&y;
     cout<<"address stored inside the ptr2 : "<<ptr2<<endl;
    cout<<"value present at the address in ptr2 : "<<*ptr2<<endl;
    x=45;
    cout<<"value present at the address in ptr1 : "<<*ptr1<<endl;
    *ptr2 = 50;
    cout<<"value present at the address in ptr2 : "<<*ptr2<<endl;
    cout<<"new value of x: "<<x<<endl;
    int newvalue= *ptr1;
    cout<<newvalue;
}