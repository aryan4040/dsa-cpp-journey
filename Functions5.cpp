#include<iostream>
using namespace std;

int max(int a, int b, int c) {
    int max;
    if(a>b && a>c) {
        max = a;
    } else if(b>c) {
        max = b;
    } else {
        max = c;
    }
    return max;
}

int main() {
    int n1, n2, n3;
    cout<<"Enter the three numbers: ";
    cin>> n1 >> n2 >> n3;
    cout<<"Max Number: "<<max(n1, n2, n3);
    return 0;
}