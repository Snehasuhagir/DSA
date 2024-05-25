#include<iostream>
#include<vector>
using namespace std;
void lexicographical(char fruit[][60],int n){
  for(int i=0;i<n-1;i++){
    int min_idx = i;
    for(int j=i+1;j<n;j++){
        if(strcmp(fruit[min_idx],fruit[j])>0){
            min_idx = j;
        }
    }
    if(min_idx!=i){
        swap(fruit[i],fruit[min_idx]);
    }
  }
    return;
  }
int main(){
    char fruit[][60] = {"papaya","lime","watermelon","apple","mango","kiwi"};
    int n = sizeof(fruit)/sizeof(fruit[0]);
    lexicographical(fruit,n);
    for(int i=0;i<n;i++){
        cout<<fruit[i]<<" ";
    }

}