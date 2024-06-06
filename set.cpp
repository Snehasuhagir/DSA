#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> set1;
    //insertion in a set
    set1.insert(4);
    set1.insert(6);
    set1.insert(1);
    set1.insert(3);
    cout<<set1.size()<<endl;
    set1.insert(2);
    cout<<set1.size()<<endl;
    //traversing a set
   // set<int>::iterator itr;
   // for(itr=set1.begin();itr!=set1.end();itr++){
     //   cout<<*itr<<" ";
    //}
    //cout<<endl;
   for(auto value:set1){
    cout<<value<<" ";
    }
    cout<<endl;
   
   //deletion of element
   //set1.erase(6);
   //auto itr = set1.begin();
   //advance(itr,4);
   //set1.erase(itr);
   //for(itr=set1.begin();itr!=set1.end();itr++){
   // cout<<*itr<<" ";
   // }
    cout<<endl;
   auto start_itr = set1.begin();
   start_itr++;
   auto end_itr = set1.begin();
   advance(end_itr,4);
   set1.erase(start_itr,end_itr);
   for(auto value:set1){
    cout<<value<<" ";
    }
    cout<<endl;
    //search the value
    if(set1.find(6)!=set1.end()){
        cout<<"value is present"<<endl;
    }
    else{
        cout<<"value is not present"<<endl;
    }
}