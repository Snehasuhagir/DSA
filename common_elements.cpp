#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    vector<int> v1(m);
    vector<int> v2(n);

    cout<<"enter elements of v1"<<endl;
    for(int i=0;i<m;i++){
        cin>>v1[i];
    }

    cout<<"enter elements of v2"<<endl;
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }

    int ans_sum = 0;

    set<int> s1;
    for(auto ele:v1){
        s1.insert(ele);
    }

    for(auto ele:v2){
        if(s1.find(ele)!=s1.end()){
            ans_sum+=ele;
        }
    }
    cout<<"Ans :"<<ans_sum;
}