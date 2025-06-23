//Problem Statement: Given an array, we have to find the largest element in the array.

#include <iostream>
using namespace std;

int LargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int arr1[] = {12,15,4,9,0};
  int n = 5;
  int max = LargestElement(arr1, n);
  cout << "The largest element in the array1 is: " << max << endl;
 
  int arr2[] =  {18,20,25,17,29};
  n = 5;
  max = LargestElement(arr2, n);
  cout << "The largest element in the array2 is: " << max<<endl;
  return 0;
}

//Time Complexity: O(n)
//Space Complexity: O(1)