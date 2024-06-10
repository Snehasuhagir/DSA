#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<string,int> directory;
    directory.insert(make_pair("ishu",700000));
    directory.insert(make_pair("aadi",320000));
    directory.insert(make_pair("ishu",800000));
    for(auto pair:directory){
        cout<<pair.first<<" - "<<pair.second<<endl;
    }
}