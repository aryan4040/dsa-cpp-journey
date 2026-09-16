#include<iostream>
using namespace std;

int sumofDigits(int n) {
    int sum = 0;
    while(n>0) {
    int lastDig = n%10;
    sum = sum + lastDig;
    n = n/10;
    }
    return sum;
}
int main() {
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<"Sum = "<<sumofDigits(n);
    return 0;
}