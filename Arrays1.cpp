#include<iostream>
using namespace std;

int main() {
    int arr[5];
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Max Number is " << max << endl;
    cout << "Min number is "<< min <<  endl;
    return 0;
}