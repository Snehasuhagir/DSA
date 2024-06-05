#include<iostream>
#include<stack>
using namespace std;
class queue{
    stack<int> st;
public:
    queue(){}

    void push(int x){
        // time complexity -> o(n)
       stack<int> temp;
       while(!st.empty()){
        temp.push(st.top());
        st.pop();
       }
       st.push(x);
       while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
       }
    }

    void pop(){
        //time complexity -> o(1)
        if(st.empty()) return ;
        st.pop();
    }

    bool empty(){
        return st.empty();
    }

    int front(){
        //time complexity -> o(n)
        if(st.empty()) return -1;
        return st.top();
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
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
}