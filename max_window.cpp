#include<iostream>
#include<deque>
#include<vector>
using namespace std;
vector <int> max_window(vector<int> &arr , int k){
    deque<int> dq;
    vector<int> res;
    for(int i=0;i<k;i++){
       while(!dq.empty() && arr[dq.back()]<arr[i]){
        dq.pop_back();
       }
       dq.push_back(i);
    }
     res.push_back(arr[dq.front()]);

    for(int i = k;i<arr.size();i++){
        int curr = arr[i];
        if(dq.front() == i-k) dq.pop_front();
        while(!dq.empty() && arr[dq.back()]<arr[i]){
        dq.pop_back();
       }
       dq.push_back(i);
       res.push_back(arr[dq.front()]);
}
return res;
}
int main(){
    vector<int> arr;
    for(int i = 0;i<arr.size();i++){
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(-1);
    arr.push_back(-3);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(7);
    }
    vector<int> result = max_window(arr,3);
   
    cout<<result.front()<<" ";
    }
