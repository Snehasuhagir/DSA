#include<iostream>
#include<string>
#include<stack>
#include<math.h>
using namespace std;
string eval(string &prev){
  stack<string> st;
  reverse(prev.begin(),prev.end());
  for(int i=0;i<prev.size();i++){
     if(isdigit(prev[i])){
      st.push(to_string(prev[i] - '0'));
     }
     else{
        string v1 = st.top();
        st.pop();
        string v2 = st.top();
        st.pop();
        string new_exp = v1 + v2 + prev[i];
        st.push(new_exp);
     }
  }
  return st.top();
}
int main(){
 string s = "*+32-15";
 cout<<eval(s);
}
