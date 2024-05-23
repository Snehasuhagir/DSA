#include<iostream>
using namespace std;
int sum(int n){
    //base case
    if(n==0) return 0;
    
    //assumption and self work
    return (sum(n-1) + ((n%2==0) ? (-n) : n));

}
int main(){
   cout<<sum(10);
}