#include<iostream>
#include<vector>
#include<list>
using namespace std;
class hashing{
    vector<list<int> >hashtable;
    int buckets;

public: 
     hashing(int size){
        buckets = size;
        hashtable.resize(size);
     }

     int hash_value(int key){
        return key % buckets;
     }

     void addkey(int key){
        int idx = hash_value(key);
        hashtable[idx].push_back(key);
     }

     list<int>::iterator searchkey(int key){
        int idx = hash_value(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);
     }

     void deletekey(int key){
        int idx = hash_value(key);
        if(searchkey(key)!=hashtable[idx].end()){
            hashtable[idx].erase(searchkey(key));
            cout<<key<<"is deleted "<<endl;
        }
        else{
            cout<<" key is not present in tha hashtable"<<endl;
        }
     }
};

int main(){
 hashing h(10);
 h.addkey(682);
 h.addkey(761);
 h.addkey(494);
 h.addkey(634);
 h.deletekey(761);
 h.deletekey(761);

}