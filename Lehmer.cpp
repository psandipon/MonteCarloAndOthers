#include <iostream>
#include<fstream>

using namespace std;

const int Nmax=2147483647; //2^31 - 1 


int main(void){

  int SEED, k, N;
  cout << "Pick your SEED" << endl;
  cin >> SEED;
  cout<< "No. of pseudo-random numbers" << endl;
  cin >> N;
  k=SEED;
  ofstream write("Lehmer.data");
  for( int i=1; i<N; i++){
    k*=16807;
       if(k <=0){
        k+=Nmax;
        }
    cout.precision(10);
    cout  << (double)k/Nmax << endl;
       write << (double)k/Nmax << endl;
  }
  return(0);
}
