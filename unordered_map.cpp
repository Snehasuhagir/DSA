#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,string> record;
    //roll_no,name
    record.insert(make_pair(2,"ishu"));
    record[3] = "tamy";
    record[1] = "aadi";
    //record[2] = "sneha";
    record.insert(make_pair(2,"sneha"));

    for(auto pair:record){
        cout<<pair.first<<" - "<<pair.second<<endl;
    }
}