#include<iostream>
#include<vector>
#include<string>
using namespace std;
string longest_common_prefix_string(vector<string> &str){
    string s1 = str[0];
    int ans_length = s1.size();
    for(int i=1;i<str.size();i++){
        int j=0;
        while(j<s1.size() && j<str[i].size() && s1[j] == str[i][j]){
            j++;
        ans_length = min(ans_length,j);
        }
    }
    string ans = s1.substr(0,ans_length);
    return ans;
}
int main(){
    int n;
    cout<<"enter the no. of string"<<endl;
    cin>>n;
    cout<<"enter the strings"<<endl;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<"the longest common prefix string is:"<<longest_common_prefix_string(str);
}