#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool anagram(string s1,string s2){
    vector<int>freq(26,0);
    // if lengths are diff for s1 and s2 then return false
    if(s1.length()!=s2.length()){
        return false;
    }
    //store freq of char in s1 and s2
    for(int i=0;i<s1.length();i++){
     freq[s1[i] - 'a']++;
     freq[s2[i] - 'a']--;
    }
    //checking if the freq of every char is 0
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(anagram(s1,s2)){
        cout<<"string is anagram"<<endl;
    }
    else{
        cout<<"string is not anagram"<<endl; 
    }
}