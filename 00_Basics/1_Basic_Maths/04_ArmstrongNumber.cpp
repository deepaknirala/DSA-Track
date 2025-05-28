//Problem Statement: Given an integer N, return true it is an Armstrong number otherwise return false.
                            
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int k = to_string(num).length();
    int sum = 0; 
    int n = num;
    // digit of the number
    while(n > 0){
        int ld = n % 10;
        sum += pow(ld, k); 
        n = n / 10;
    }
    return sum == num ? true : false;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;  //check for 153
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}  