#include<iostream>
#include<vector>
#include<string>
using namespace std;
string countsort(string str){
    vector<int> freq(26,0);
    //storing freq of every character in string
    for(int i=0;i<str.size();i++){
        int index = str[i] - 'a';
        freq[index]++;
    }
    //create a sorted array
    int j=0;
     for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j] = i +'a';
            j++;
        }
     }
     return str;
    
}
int main(){
    string str;
    cin>>str;
    cout<<countsort(str);
}