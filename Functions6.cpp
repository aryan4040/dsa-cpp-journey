#include<iostream>
using namespace std;

bool isPalindrome(int n) {
    int originalNum = n;
    int tempNum = 0;
    while(n>0) {
    int lastDig = n%10;
    tempNum = tempNum * 10 + lastDig;
    n = n/10;
    }
    if(tempNum == originalNum) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Is it a Palindrome?: "<<isPalindrome(n);
    return 0;
}