#include <iostream>
using namespace std;

void func(int i, int n){  //recursive function
   // Base Condition.
   if(i>n) return;
   cout<<"Deep"<<endl;
   // Function call to print till i increments
   func(i+1,n);
}

int main(){
  int n = 5;
  func(1,n);
  return 0;
}