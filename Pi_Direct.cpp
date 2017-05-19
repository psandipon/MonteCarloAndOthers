#include <iostream>
#include <cstdlib>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main(void){
  int SEED=time(NULL)*getpid();
  srand48(SEED);
  int counter=0,N;
  double x,y;
  cout<<"How many points you want to sample?" << endl;
  cin>>N;
  for ( int i=1; i<N; i++){
    x=drand48();
    y=drand48();
    if(x*x+y*y <=1.0){
      counter++;
    }
  }
    cout.precision(10);

  cout << "Pi is approx. " << (4.0*counter)/N <<endl;
  return(0);
}
