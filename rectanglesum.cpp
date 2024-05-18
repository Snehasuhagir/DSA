#include<iostream>
#include<vector>
using namespace std;
/*int rectangleSum(vector<vector<int> >&matrix,int l1,int r1,int l2,int r2){
    int sum=0;
    // for(int i=l1;i<=l2;i++){
    // for(int j=r1;j<=r2;j++){
    // sum+=matrix[i][j];
    //   }
    // }

    //prefix sum of row wise

    for(int i=0;i<matrix.size();i++){
        for(int j=1;j<matrix[0].size();j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
         cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }

    // rectangle sum from l1,r1 to l2,r2
    for(int i=l1;i<=l2;i++){
        if(r1!=0){
        sum+=matrix[i][r2]-matrix[i][r1-1];
    }
        else{
        sum+=matrix[i][r2];
    }
    }
    return sum;
}
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int> >matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         cin>>matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }

    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    int sum=rectangleSum(matrix,l1,r1,l2,r2);
    cout<<sum;
}
*/
//     another method-> prefix sum over columns & rows both
    int rectangleSum(vector<vector<int> >&matrix,int l1,int r1,int l2,int r2){
    
     //prefix sum of row wise
   
    for(int i=0;i<matrix.size();i++){
        for(int j=1;j<matrix[0].size();j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    //prefix sum of column wise
    for(int i=1;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            matrix[i][j]+=matrix[i-1][j];
        }
    }
    //printing prefix sum of 2d array 
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
         cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }

    // rectangle sum from l1,r1 to l2,r2
    int left_sum=0,top_sum=0,topleft_sum=0;
    if(r1!=0) left_sum= matrix[l2][r1-1];
    if(l1!=0) top_sum= matrix[l1-1][r2];
    if(l1!=0 && r1!=0) topleft_sum= matrix[l1-1][r1-1];
    int sum = matrix[l2][r2]-left_sum-top_sum+topleft_sum;

    return sum;
}
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int> >matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         cin>>matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }

    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    int sum=rectangleSum(matrix,l1,r1,l2,r2);
    cout<<sum;
}