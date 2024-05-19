#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    const int N= 1e5+10;
    vector<int>freq(N,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    cout<<"enter qeries:"<<endl;
    int q;
    cin>>q;
    while(q--){
        int queryelement;
        cin>>queryelement;
        cout<<freq[queryelement]<<endl;
    }
    return 0;
}