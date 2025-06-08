#include <iostream>
using namespace std;

void func(int i, int n){ 
   // Base Condition
   if(i<1) return;
   cout<<i<<endl;
   func(i-1,n); // Function call to print till i decrements
}

int main(){
  int n = 5;
  func(n,n);
  return 0;
}