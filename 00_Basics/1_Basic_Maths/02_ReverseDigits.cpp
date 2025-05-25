#include <iostream>
using namespace std;

int reverse(int x) { 
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;
            if (rev > INT_MAX / 10|| (rev < INT_MIN / 10)) return 0;

            rev = rev * 10 + digit;
            x /= 10;
        }

        return rev;
    }

    int main(){
    int N;
    cout << "Enter an integer: ";
    cin >> N;
    int reversedNumber = reverse(N);
    cout << "Reversed number of " << N << " is: " << reversedNumber << endl;

    return 0;
    }