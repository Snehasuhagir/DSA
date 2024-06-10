#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> target_sum_pair(vector<int> &v,int target){

    unordered_map<int,int> m;
    vector<int> ans(2,-1);

    for(int i=0;i<v.size();i++){
        if(m.find(target - v[i])!=m.end()){
            ans[0] = m[target-v[i]];
            ans[1] = i;
            return ans;
        }
        else{
            m[v[i]] = i;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;

    vector<int> ans = target_sum_pair(v,target);
    cout<<ans[0]<<","<<ans[1];
}