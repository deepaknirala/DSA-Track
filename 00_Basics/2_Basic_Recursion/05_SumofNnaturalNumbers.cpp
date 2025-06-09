//Functional way to find the sum of first n natural numbers using recursion.
#include <iostream>
using namespace std;

int func(int n){ 
// Base Condition.
   if(n == 0) return 0;

   // dividing problems into 2 parts and then combined.
   return n + func(n-1); 
}

int main(){
  int n = 5;
  cout<<func(n)<<endl;
  return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(n) for the recursion stack.