#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int max_length_zero_sum(vector<int> &arr){
    unordered_map<int,int> m;
    int prefix_sum = 0;
    int max_length = 0;

    for(int i=0;i<arr.size();i++){
        prefix_sum+=arr[i];

        if(prefix_sum==0){
            max_length++;
        }

        if(m.find(prefix_sum)!=m.end()){
            max_length = max(max_length,i-m[prefix_sum]);
        }
        else{
            m[prefix_sum] = i;
        }
    }
    return max_length;
}
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<max_length_zero_sum(arr);
}