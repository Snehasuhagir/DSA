#include<iostream>
using namespace std;

int main(){
   int x=20;
   double d = 3.5;
   float f = 4.2;

   int *ptrx = &x;
   double *ptrd = &d;
   float *ptrf = &f;

   cout<<"size of x is:"<<sizeof(x)<<endl;
   cout<<"ptrx+n: "<<ptrx<<" "<<ptrx+1<<" "<<ptrx+2<<" "<<ptrx+3<<" "<<ptrx-2<<endl;

   cout<<"size of d is:"<<sizeof(d)<<endl;
   cout<<"ptrd+n: "<<ptrd<<" "<<ptrd+1<<" "<<ptrd+2<<" "<<ptrd+3<<endl;
   
   cout<<"size of f is:"<<sizeof(f)<<endl;
   cout<<"ptrf+n: "<<ptrf<<" "<<ptrf+1<<" "<<ptrf+2<<" "<<ptrf+3<<" "<<ptrf-1<<endl;

   
    return 0;
}