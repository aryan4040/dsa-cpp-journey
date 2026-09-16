#include<iostream>
using namespace std;

int sum (int a, int b) {
    int s = a + b;
    cout<<s;
    return s;
}

bool isPrime(int n) {
    for(int i=2; i<=n-1; i++) {
        if(n % i == 0){
            return false;
        } 
    }
    return true;
}

int main() {
    cout<<isPrime(23)<<endl;
        
    sum(4,5);
    return 0;
}