//Check if a number is prime or not

#include <iostream>
using namespace std;
#include <cmath> // For sqrt function

bool checkPrime(int n){ 
    int count = 0;
    for(int i = 1; i <= sqrt(n); i++){ 
        if(n % i == 0){ //if n is divisible by i without a remainder
            count = count + 1;  // Increment the count of factors

            if(n / i != i){   // If n is not a perfect square, count its reciprocal factor.

                count = count + 1;
            }
        }
    }
    if(count == 2){   // If the number of factors is exactly 2, it means the number is prime.
        return true;  
    }
    else{ 
        return false; //indicating that the number is not prime
    }
}

int main() {
    int n;
    cout << "Enter a number to check if it is prime: ";
    cin >> n;  // Example input: 329
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}            