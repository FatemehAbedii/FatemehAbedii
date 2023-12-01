#include <iostream>

using namespace std;

 main() {
 float x,y,z,N,M,Q,P,W,T,H;
 
 cout<< " plase eneter value for X : ";
 cin>> x;
 cout<< "plase eneter value for Y :";
 cin>> y;
 cout<< "plaese enter value for Z :";
 cin>> z;
 
 N=x-y;
 M=x+z;
 Q=N*M;
 P=x+y+z;
 W=P*P;
 T=W+1;
 H=Q/T;
 
 cout<<H;
 
}