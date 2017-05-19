#include <iostream>
#include <cmath>
#include <cstdlib>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

const double a=1.0;  // length of the needle
const double b=1.2;  // space between lines
//  a <=b 

int main(void){
  int SEED=time(NULL)*getpid();
  srand48(SEED);
  int counter=0,N;
  double x, X, Phi;
  double dX, dY,G ;
  cout<<"How many samples do you want?" << endl;
  cin>>N;
  for ( int i=1; i<N; i++){
    x=b*drand48()/2 ; // Location of the needle center 
    dX=drand48();
    dY=drand48();
    G=dX*dX + dY*dY; 
    if( G <=1){     
      X= x-(a*dX)/(2*G);
      //    cout << X << endl;
    if(X<0){
      counter++;
    }
  }
  }    
    cout.precision(10);
    cout << "Pi is approx. " << (2.0*(double)N/counter)*(a/b) << endl;
  return(0);
}
