//Problem Statement: Given an integer N, return true if it is a palindrome else return false.

#include <iostream>
using namespace std;

bool isPalindrome(int x) {
        long revNum=0, num=x; 
        if(x<0 || (x!=0 && x%10==0)) return false;
        while(num){
            revNum=revNum*10 + num%10;
            num/=10;
        }
        return ((revNum==x)||(x==revNum/10));
    }

int main() {
    int N;
    cout << "Enter an integer: ";
    cin >> N;
    
    if (isPalindrome(N)) {
        cout << N << " is a palindrome." << endl;
    } else {
        cout << N << " is not a palindrome." << endl;
    }
  return 0;
}