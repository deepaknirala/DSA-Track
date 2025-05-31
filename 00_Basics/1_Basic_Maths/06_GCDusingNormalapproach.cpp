//Problem Statement: Given two integers N1 and N2, find their greatest common divisor.

#include <iostream>
using namespace std;

int gcd(int n1, int n2) {
    
    for(int i = min(n1, n2); i > 0; i--) {
        // Check if i is a common
        // factor of both n1 and n2
        if(n1 % i == 0 && n2 % i == 0) {
            // If i is a common factor,
            // return it as the GCD
            return i;
        }
    }
    // If no common factors are found,
    // return 1 (as 1 is always a
    // divisor of any number)
    return 1;
}
//Time complexity will be O(min(N1, N2))
//this approach is spmewhat better than brute force approach but its still not optimal.
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;  // Example input: 48 and 18

    int result = gcd(num1, num2);
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;
  return 0;
}


                                
                            