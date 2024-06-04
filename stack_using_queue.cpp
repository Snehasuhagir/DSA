#include<iostream>
#include<queue>
using namespace std;
class stack{
    queue<int> qu;
public:
    stack(){}

    void push(int x){
        // time complexity -> o(1)
        qu.push(x);
    }

    void pop(){
        //time complexity -> o(n)
        if(qu.empty()) return;
        queue<int> temp;
        while(qu.size()>1){
            temp.push(qu.front());
            qu.pop();
        }
        qu.pop();
        while(!temp.empty()){
            qu.push(temp.front());
            temp.pop();
        }
    }

    bool empty(){
        return qu.empty();
    }

    int front(){
        //time complexity -> o(n)
        if(qu.empty()) return -1;
        queue<int> temp;
        while(qu.size()>1){
            temp.push(qu.front());
            qu.pop();
        }
        int result = qu.front();
        while(!temp.empty()){
            qu.push(temp.front());
            temp.pop();
        }
        return result;
    }
    

};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    st.pop();
    while(!st.empty()){
        cout<<st.front()<<" ";
        st.pop();
    }
}