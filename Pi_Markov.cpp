#include <iostream>
#include <cmath>
#include <cstdlib>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

const double del=0.1;



int main(void){
  int SEED=time(NULL)*getpid();
  srand48(SEED);
  int counter=0,N, reject=0,accept=0;
  double x,y,xnew,ynew;
  cout<<"How many points you want to sample?" << endl;
  cin>>N;
  x=0;
  y=0;
  for ( int i=1; i<N; i++){
    xnew=x+del*(2*drand48()-1.0) ;
    ynew=y+del*(2*drand48()-1.0) ;
      if(fabs(xnew) >=1 || fabs(ynew)>=1){
	reject++;
      }
      else{
	accept++;
	x=xnew;
	y=ynew;
	if(x*x+y*y <=1){
	  //	  cout << x << "   " << y << endl;
	  counter++;
	}
      }
  }
    
    cout.precision(10);
    cout << "Pi is approx. " << 4.0*counter/accept << endl;
    cout<< "The rejection rate is " << (double)reject/N << endl;
  return(0);
}
