#include<iostream>
using namespace std;
//for unique largest
/*int largesteleindex(int arr[],int size){
  int max=INT_MIN;
  int maxindex=-1;
  for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
        maxindex=i;
    }
  }
  return maxindex;
}
int main(){
    int array[]={2,3,5,7,6,1};
    
    int indexoflargest = largesteleindex(array,6);
    
    array[indexoflargest]=-1;
   
    int indexofseclargest = largesteleindex(array,6);
    cout<<array[indexofseclargest]<<endl;
    
    return 0;
}*/
//for double largest
/*int largesteleindex(int arr[],int size){
  int max=INT_MIN;
  int maxindex=-1;
  for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
        maxindex=i;
    }
  }
  return maxindex;
}
int main(){
    int array[]={2,3,5,7,6,7,1};
    int n=7;
    int indexoflargest = largesteleindex(array,n);
    cout<<array[indexoflargest]<<endl;
    int largestelement = array[indexoflargest];
    for(int i=0;i<n;i++){
        if(array[i]==largestelement){
            array[i]=-1;
        }
    }
  
    int indexofseclargest = largesteleindex(array,n);
    cout<<array[indexofseclargest]<<endl;
   
    return 0;
}
*/
//another method using only 2 loop
int secondlargestelement(int arr[],int size){
    int max=INT_MIN;
    int sec_max=INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>sec_max && arr[i]!=max){
            sec_max=arr[i];
        }
    }
    return sec_max;
}
int main(){
    int arr[]={2,3,5,7,6,7,1};
    int n=7;
    cout<<secondlargestelement(arr,n)<<endl;
    return 0;
}