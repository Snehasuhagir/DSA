#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    set<int> s1;
    for(auto value:v){
        s1.insert(value);
    }
    auto itr = s1.begin();
    itr++;

    cout<<"second smallest element : "<<*itr;
}