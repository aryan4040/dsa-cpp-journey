#include<iostream>
using namespace std;

void print(int *arr,int n) {
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);
    int st = 0, end = n-1;
    while(st < end) {
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }
    print(arr,n);
    return 0;
}