#include<iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        int minIndex = i;

        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int arr[] = {7,6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(int);

    cout << "Original Array: ";
    printArr(arr, n);

    cout << endl;

    selectionSort(arr, n);

    cout << "Sorted Array: ";
    printArr(arr, n);

    cout << endl;

    return 0;
}