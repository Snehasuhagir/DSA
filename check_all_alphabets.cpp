#include <algorithm>
#include<iostream>
#include<string>
#include<set>
using namespace std;
bool check_all_alphabets(string s){
    if(s.length()<26){
        return false;
    }

    transform(s.begin(),s.end(),s.begin(),::tolower);

    set<char> alphabets;
    for(auto ch:s){
        alphabets.insert(ch);
    }

    return (alphabets.size()==26);
}
int main(){
   string input;
   cin>>input;
   if(check_all_alphabets(input)){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}