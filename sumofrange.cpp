#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    int n=(y-x+1);
    int a=x;
    int result=(n*(2*a+(n-1)*1))/2;
    cout<<result;
return 0;
}
