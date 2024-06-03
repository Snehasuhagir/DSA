#include<iostream>
#include<string>
#include<stack>
using namespace std;
int bracket(string str){
    int count = 0;
 int n = str.size();
 stack<char> st;
 for(int i = 0;i<n;i++){
    if(str[i]=='('){
        st.push('(');
    }
    else{
        if(!st.empty()){
            st.pop();
        }
        else{
            count++;
        }
    }
 }
 
 return count;
}
int main(){
    string str = "((()))))";
   cout<<bracket(str);

}