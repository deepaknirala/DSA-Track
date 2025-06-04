//Problem Statement: Given an integer N, return all divisors of N.   

#include <iostream>
#include <vector> //for using vector
#include <cmath>   //for using sqrt function
using namespace std;

vector<int> findDivisors(int n) {
    vector<int> divisors; 
    int sqrtN = sqrt(n); 
  
    for (int i = 1; i <= sqrtN; ++i) { 
        if (n % i == 0) { 
            divisors.push_back(i); 
            if (i != n / i) {
                divisors.push_back(n / i); 
            }
        }
    }
    return divisors; 
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    vector<int> divisors = findDivisors(number);
    cout << "Divisors of " << number << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;
    return 0;
}
                                
//Time Complexity: O(sqrt(N)), where N is the input number. This is because we only iterate up to the square root of N.
//Space Complexity: O(D), where D is the number of divisors of N. In the worst case, this can be O(N) if N is prime.