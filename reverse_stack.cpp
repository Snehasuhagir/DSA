#include<iostream>
#include<stack>
using namespace std;
void reverse(stack<int> &st){
    stack<int> temp1,temp2;
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        temp1.push(curr);
    }
    while(!temp1.empty()){
        int curr = temp1.top();
        temp1.pop();
        temp2.push(curr);
    }
    while(!temp2.empty()){
        int curr = temp2.top();
        temp2.pop();
        st.push(curr);
    }
}
void insert_at_bottom(stack<int> &st,int x){
    stack<int> temp;
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
    
}
void f(stack<int> &st){
    if(st.empty())return;
    int curr = st.top();
    st.pop();
    f(st);
   insert_at_bottom(st,curr);
}
int main(){
    stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
//reverse(st);
f(st);
while(!st.empty()){
    int curr = st.top();
    st.pop();
    cout<<curr<<endl;
}
}