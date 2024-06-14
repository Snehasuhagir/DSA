#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_multimap<string,int> fruit_count;
    fruit_count.insert(make_pair("mango",5));
    fruit_count.insert(make_pair("apple",8));
    fruit_count.insert(make_pair("mango",6));
    fruit_count.insert(make_pair("orange",2));

    for(auto pair:fruit_count){
        cout<<pair.first<<" - "<<pair.second<<endl;
    }
}