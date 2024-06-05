#include<iostream>
#include<vector>
using namespace std;
class queue{
    int front;
    int back;
    vector<int> v;

    public:
      queue(){
        front = -1;
        back = -1;
      }

      void enqueue(int data){
        v.push_back(data);
        back++;
        if(back==0) front = 0;
      }

      void dequeue(){
        if(front == back){
            front = -1;
            back = -1;
            v.clear();
        }
        else{
            front++;
        }

      }

      int get_front(){
        if(front==-1) return -1;
        return v[front]; 
      }

      bool isEmpty(){
        return front = -1;
      }
};
int main(){
queue qu;
  qu.enqueue(10);
  qu.enqueue(20);
  qu.enqueue(30);
  qu.dequeue();
  qu.enqueue(40);
  qu.dequeue();
  qu.dequeue();
  qu.dequeue();
  qu.enqueue(400);
  while(!qu.isEmpty()){
    cout<<qu.get_front()<<" ";
    qu.dequeue();
  }
}
