#include<iostream>
#include<vector>
using namespace std;
void bucketsort(float arr[],int size){
    vector<vector<float> >bucket(size,vector<float> ());//step 1
    //finding range
    float min_ele = arr[0];
    float max_ele = arr[0];
    for(int i=1;i<size;i++){
        min_ele = min(min_ele,arr[i]);
        max_ele = max(max_ele,arr[i]);
    }
    float range = (max_ele - min_ele)/size;
    //inserting element into bucket
    for(int i=0;i<size;i++){
        int index = (arr[i]-min_ele)/range;
        float diff = (arr[i]-min_ele)/range - index;
        if(diff==0 && arr[i]!=min_ele){
            bucket[index-1].push_back(arr[i]);
        }
        else{
            bucket[index].push_back(arr[i]);
        }
    }
    //sorting individual bucket
    for(int i=0;i<size;i++){
        if(!bucket[i].empty()){
        sort(bucket[i].begin(),bucket[i].end());
    }
    }

    //combining bucket elements
    int k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k++] = bucket[i][j];
        }
    }

}
int main(){
    float arr[] = {2.39,8.04,4.60,0.9,1.69};
    int size = sizeof(arr)/sizeof(arr[0]);
    bucketsort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}