#include<iostream>
using namespace std;
int main() {
    int n;
    int digSum = 0;
    int lastDigit;
    cout<<"Enter the Number: ";
    cin>>n;
    while(n>0) {
        lastDigit = n%10;
        digSum = digSum + lastDigit;
        n = n/10;
    }
    cout<<"Sum of Digits: "<<digSum<<endl;
    return 0;
}