#include<iostream>
#include<vector>
using namespace std;
class queue{
    int front;
    int back;
    int cs;
    int ts;
    vector<int> v;

    public:
      queue(int n){
        v.resize(n);
        front = 0;
        back = n-1;
        cs=0;
        ts=n;
      }

      void enqueue(int data){
        if(isFull()) return;
        back = (back+1)%ts;
        v[back] = data;
        cs++;
      }

      void dequeue(){
        if(isEmpty()){ return;
        }
        else{
            front = (front +1)%ts;       }
            cs--;
      }

      int get_front(){
        if(front==-1) return -1;
        return v[front]; 
      }

      bool isEmpty(){
        return cs==0;
      }
      bool isFull(){
       return cs==ts;
      }
};
int main(){
queue qu(3);
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
