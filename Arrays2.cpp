//Linear Search:

#include<iostream>
using namespace std;

int linearSearch(int *arr, int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[8];
    int n = sizeof(arr) / sizeof(int);
    
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<linearSearch(arr, 8, 4);

    return 0;
}