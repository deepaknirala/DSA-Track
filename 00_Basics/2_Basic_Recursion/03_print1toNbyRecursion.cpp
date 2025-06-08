#include <iostream>
using namespace std;

void fun(int i, int n){
   // Base Condition.
   if(i>n) return;
   cout<<i<<endl;
   fun(i+1,n); // Function call to print till i increments
}

int main(){
  int n = 5;
  fun(1,n);
  return 0;
}