#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
    set<string> invitelist;
    int n;
    cin>>n;
    while(n--){
        string name;
        cin>>name;

        invitelist.insert(name);
    }
    cout<<"printing invite list :"<<endl;
    for(auto name:invitelist){
        cout<<name<<endl;
    }

}