#include<iostream>
#include<vector>
using namespace std;
// m=3 n=4
// 0 1 1 1
// 0 0 0 1
// 0 0 0 1
// max_ones= min value/3
//max_onesrow=-1/0
//column=4
//numberofones=4-1=3
//result=0
/*int Maximum_ones_row(vector<vector<int> >&v){
    int max_ones=INT_MIN;
    int max_onesrow=-1;
    int column=v[0].size();

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){

            if(v[i][j]==1){
                int numberofones=column-j;
                if(numberofones>max_ones){
                     max_ones=numberofones;
                     max_onesrow=i;
                }
                break;
            }
        }
    }
    return max_onesrow;
}
int main(){
    int m,n;
    cin>>m>>n;

    vector<vector<int> >vec(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    int result= Maximum_ones_row(vec);
    cout<<result;

return 0;
}
*/
//    another method
int leftmostone(vector<vector<int> >&v){
    int leftone=-1;
    int maxonerow=-1;
    int j= v[0].size()-1;
    // leftmost one for 0th row
    while(j>=0 && v[0][j]==1){
       leftone=j;
       maxonerow=0;
       j--;
    }
    // for ith row
    for(int i=0;i<v.size();i++){
    while(j>=0 && v[i][j]==1){
      leftone=j;
       maxonerow=i;
       j--;
    }
}
return maxonerow;
}
int main(){
    int m,n;
    cin>>m>>n;

    vector<vector<int> >vec(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    int result= leftmostone(vec);
    cout<<result;

return 0;
}