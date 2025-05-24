//Problem : Given an integer N, return the number of digits in N.

#include <iostream>
#include <cmath> // For log10 function
using namespace std;

//Approach 1: It will take O(log N) time complexity and O(1) space complexity.
/*int countDigits(int N) { 
    if (N == 0) return 1; // Special case for 0
    int count = 0;
    while (N > 0) {
        N /= 10; // Each division by 10 removes the last digit(at one's place)
        count++;
    }
    return count;
}*/

//Approach 2: Using Maths log function will take O(1) time complexity and O(1) space complexity.
 int countDigits(int N) {
     if (N == 0) return 1; // Special case for 0
    return int(log10(N)) + 1; // log10(N) gives number of digits in N and we add 1 because log10(1) = 0
}   

int main(){
    int N;
    cout << "Enter an integer: ";
    cin >> N;
    if (N < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1; // Exit if the input is negative
    }
    
    int digitCount = countDigits(N);
    cout << "Number of digits in " << N << " is: " << digitCount << endl;

    return 0;
}