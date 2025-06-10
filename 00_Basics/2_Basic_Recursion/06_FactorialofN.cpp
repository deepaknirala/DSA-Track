//Problem Statement: Given a number N,  print its factorial.

#include <iostream>
using namespace std;

int factorial(int n){   
   if(n == 0) //Base condition.
       return 1; // 0! is defined as 1.

   // Problem broken down into 2 parts and then combined.
   return n * factorial(n-1);
}

int main(){
  int n = 5;
  cout<<factorial(n)<<endl;
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n) for the recursion stack.