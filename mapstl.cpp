#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int> directory;
    directory["Sneha"] = 3492954;
     directory["Aditya"] =2051946;
      directory["Tamanna"] =0245402;

      for(auto element:directory){
        cout<<"Name - "<<element.first<<" "<<endl;;
        cout<<"phone no. - "<<element.second<<" "<<endl;
      }
      cout<<endl;
      directory["Sneha"] = 2; 

      /*for(auto element:directory){
        cout<<"Name - "<<element.first<<" "<<endl;;
        cout<<"phone no. - "<<element.second<<" "<<endl;
      }
      */

      map<string,int>::iterator itr;
      for(itr = directory.begin();itr!=directory.end();itr++){
        cout<<itr->first<<" - "<<itr->second<<endl;
      }
      cout<<endl;
      
       map<string,int>::reverse_iterator r_itr;
      for(r_itr = directory.rbegin();r_itr!=directory.rend();r_itr++){
        cout<<r_itr->first<<" - "<<r_itr->second<<endl;
      }
}