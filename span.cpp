#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> pge(vector<int> &arr){
    int n = arr.size();
    reverse(arr.begin(),arr.end());
    vector<int> output(n,-1);
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
      while(!st.empty() && arr[i] > arr[st.top()]){
        output[st.top()] = n-i-1;
        st.pop();
      }
      st.push(i);

    }
    reverse(output.begin(),output.end());
    reverse(arr.begin(),arr.end());
    //while(!st.empty()){ //not mandatory while loop
      //output[st.top()] = -1;
      //st.pop();
    //}
    return output;
}
int main(){
 int n;
 cin>>n;
 vector<int> v;
 while(n--){
    int x;
    cin>>x;
    v.push_back(x);
 }
 vector<int> res = pge(v);
 for(int i = 0;i<res.size();i++){
   cout<<i-res[i]<<" ";
 }
}