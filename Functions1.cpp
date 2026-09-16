#include<iostream>
using namespace std;

int prod(int a, int b) {
    int prod = a * b;
    return prod;
}

bool isEven(int n) {
    if(n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int N;
    cout<<"Enter the number: ";
    cin>>N;
    cout<<isEven(N);cout<<endl;
    
    int product = prod(4,5);
    cout<<"prod = "<<product;
    return 0;

}