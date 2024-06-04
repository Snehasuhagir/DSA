#include<iostream>
#include<stack>
using namespace std;
class queue{
    stack<int> st;
public:
    queue(){}

    void push(int x){
        // time complexity -> o(1)
        st.push(x);
    }

    void pop(){
        //time complexity -> o(n)
        if(st.empty()) return;
        stack<int> temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }

    bool empty(){
        return st.empty();
    }

    int front(){
        //time complexity -> o(n)
        if(st.empty()) return -1;
        stack<int> temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        int result = st.top();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return result;
    }
    

};
int main(){
    queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    qu.pop();
    qu.pop();
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
}