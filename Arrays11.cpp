#include<iostream>
using namespace std;

int targetIndex(int *arr, int n, int k) {

    int st = 0;
    int end = n - 1;

    while(st <= end) {

        int mid = st + (end - st) / 2;

        // Target found
        if(arr[mid] == k) {
            return mid;
        }

        // Left half is sorted
        if(arr[st] <= arr[mid]) {

            // Target lies inside sorted left half
            if(arr[st] <= k && k < arr[mid]) {
                end = mid - 1;
            }
            // Target must be in right half
            else {
                st = mid + 1;
            }
        }

        // Right half is sorted
        else {

            // Target lies inside sorted right half
            if(arr[mid] < k && k <= arr[end]) {
                st = mid + 1;
            }
            // Target must be in left half
            else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {

    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 0;

    cout << targetIndex(arr, n, target) << endl;

    return 0;
}