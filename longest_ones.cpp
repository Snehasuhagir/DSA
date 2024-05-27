#include<iostream>
#include<vector>
#include<string>
using namespace std;
int longest_ones(string str,int k){
    int start = 0;
    int end = 0;
    int zeroescount = 0;
    int max_length = 0;

    for(;end<str.size();end++){
        if(str[end]=='0'){
            zeroescount++;
        }
        while(zeroescount>k){
            if(str[start]=='0') zeroescount--;
            start++;
        }
        max_length = max(max_length,end-start+1);
    }
    return max_length;
}
int main(){
    string str;
    cin>>str;

    int k;
    cin>>k;
    cout<<longest_ones(str,k);
}