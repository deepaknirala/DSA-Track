#include <iostream>
using namespace std;
int count = 0;

void print(){
   
   // Base Condition.
   if(count == 5)  return;
   cout<<count<<endl;

   // Count Incremented
   count++;
   print();

}

int main(){
    print(); // Function Call
  return 0;
}