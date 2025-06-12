//Problem Statement: for a given integer N, Print the nth Fibonacci term.

#include<iostream>
using namespace std;

int fibonacci(int N){
   
   if(N <= 1) return N; //base condition
   
   // Problem broken down into 2 functional calls & their results combined and returned
   int last = fibonacci(N-1);
   int secondlast = fibonacci(N-2);

   return last + secondlast;
}

int main(){
  int N = 7;
  cout<<fibonacci(N)<<endl;
  return 0;
}