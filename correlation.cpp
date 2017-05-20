#include <iostream>
#include <cstdlib>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int N=16384;

double average( double A[]){
double sum = 0;
for(int j=0; j<N; j++){
sum += A[j];
}
return( sum/N);
}

double correlator(double A[], int i){
double  summ=0;
 for(int k=0; k<=N-i;k++){
   summ+=A[k]*A[k+i];
 }
 return(summ/(N-i));
}
 

int main(void){
  
int SEED=time(NULL)*getpid();
 srand48(SEED);
 double x[N];
 for(int i=0; i < N; i++){
  x[i]=drand48();
 }
 cout << average(x) << endl;
 for( int m=1; m< 100; m++){
   cout << correlator(x,m) << endl;
 }
return(0);
}
