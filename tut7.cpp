#include<iostream>
using namespace std;
int main() {
    int n;
    int digSum = 0;
    int lastDig;
    cout<<"Enter the Number: ";
    cin>>n;
    while(n>0) {
        lastDig = n % 10;
        if(lastDig % 2 != 0) {
            digSum =  digSum + lastDig;
        }
        n = n / 10;
    }
    cout<<"Sum of Odd Digits: "<< digSum <<endl;
    return 0;
}