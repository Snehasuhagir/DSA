#include<iostream>
#include<vector>
using namespace std;
/*int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
//       another way

vector<vector<int> > pascalTriangle(int n){
    vector<vector<int> > pascal(n);

    for(int i=0;i<n;i++){
        pascal[i].resize(i+1);

        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                pascal[i][j]=1;
            }
            else{
                pascal[i][j]= pascal[i-1][j]+pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}
int main(){
    int n;
    cin>>n;

    vector<vector<int> > ans;
    ans=pascalTriangle(n);

    for(int i=0;i<ans.size();i++){
      for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<"  ";
      }
      cout<<endl;
    
    }
    return 0;
}