#include<iostream>
#include<vector>
using namespace std;
// n=5
// arr=0 5 1 2 3 4
// prefixsum array=0 5 6 8 11 15
//q=2
//l=2,r=4
//ans=6
//l=1,r=5
//ans=15
int main(){
    int n;
    cin>>n;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    //calculate prefixsum array
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }
    int q;
    cin>>q;
    
    while(q--){
        int l,r;
        cin>>l>>r;
        //ans=prefixsum[r]-prefixsum[l-1]
       int ans=v[r]-v[l-1];
       cout<<ans<<endl;
    }
    return 0;
}