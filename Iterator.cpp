#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l1 = {1,2,3,4,5};
    auto itr = l1.begin();
    cout<<*itr<<endl;
    //l1.end() - iterator pointing to the memory location after 5

    auto rev_itr = l1.rbegin();
    cout<<*rev_itr<<endl;
    //l1.rend() - iterator pointing to the memory location after 5
    advance(itr,2);
    cout<<*itr<<endl;
}