#include<iostream>
#include<stack>
#include<vector>
using namespace std;
#define ll long long int
class Minstack{
    public:
       stack<ll> st;
       ll mn;
       Minstack(){
        mn = INT_MAX;
       }

       void push(int val){
        if(st.empty()){
            mn = val;
            st.push(val);
        }
        else{
            st.push(val-mn);
            if(mn>val){
                mn = val;
            }
        }
       }
       void pop(){
        if(!st.empty()){
            if(st.top()>=0){
                st.pop();
            }
            else{
                mn = mn - st.top();
                st.pop();
            }
        }
       }
       int top(){
        if(st.size()==1){
            return st.top();
        }
        else if(st.top()<0){
            return mn;
        }
        else{
            return mn + st.top();
        }
       }
       int getMin(){
        return mn;
       }
};
int main(){
    Minstack m;
    stack<int> st;
   Minstack();
   m.push(-2);
   m.push(0);
   m.push(-3);
  cout<<m.getMin()<<endl;
  m.pop();
  cout<<m.top()<<endl;
  cout<<m.getMin()<<endl;
}