#include<iostream>
#include<climits>
using namespace std;

int totalWater(int *height, int n) {

    int leftTall[n];
    int rightTall[n];

    // Step 1: Build leftTall[]
    leftTall[0] = height[0];

    for(int i = 1; i < n; i++) {
        leftTall[i] = max(leftTall[i-1], height[i]);
    }

    // Step 2: Build rightTall[]
    rightTall[n-1] = height[n-1];

    for(int j = n-2; j >= 0; j--) {
        rightTall[j] = max(rightTall[j+1], height[j]);
    }

    // Step 3: Calculate total water
    int total = 0;

    for(int i = 0; i < n; i++) {
        int waterStored = min(leftTall[i], rightTall[i]) - height[i];
        total += waterStored;
    }

    return total;
}

int main() {

    int arr[] = {4, 2, 0, 3, 2, 5};
    int n = sizeof(arr) / sizeof(int);

    cout << "Total water stored = " << totalWater(arr, n);

    return 0;
}