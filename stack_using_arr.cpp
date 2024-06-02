#include<iostream>
using namespace std;
class stack{
    int capacity;
    int *arr;
    int top;

    public:
     stack(int c){
        capacity = c;
        arr = new int[c];
        top = -1;
     }

     void push(int data){
        if(top==capacity-1){
            cout<<"Overflow"<<endl;
            return ;
        }
        top++;
        arr[top] = data;
     }
     int pop(){
        if(top==-1){
            cout<<"Underflow"<<endl;
            return -1;
        }
        top--;
     }

     bool isEmpty(){
       return top = -1;
     }
     bool isFull(){
       return top = capacity-1;
     }
     int size(){
        return top+1;
     }
     int get_top(){
        if(top==-1){
            cout<<"Underflow"<<endl;
            return -1;
        }
        return arr[top];
     }
};
int main(){
   stack st(3);
   st.push(5);
   st.push(4);
   st.push(3);
   cout<<st.get_top()<<endl;
   st.pop();
   cout<<st.get_top()<<endl;
   st.push(2);
   
   cout<<st.get_top()<<endl;
   cout<<st.size()<<endl;
   
   
}