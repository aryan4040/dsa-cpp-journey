//Max Sumarray (Brute Force)

#include<iostream>
#include<climits>
using namespace std;

int maxSubarray(int *arr, int n) {
    int maxSum = INT_MIN;
    for(int start = 0; start <n; start++) {
        for(int end=start; end <n; end++) {
            int currSum=0;
            for(int i=start; i<=end; i++) {
                currSum=currSum+arr[i];
            }
            cout<<currSum<<",";
            maxSum = max(currSum,maxSum);
        }
         cout<<endl;
    }
    cout<<"Max Subarray is "<<maxSum<<endl;
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);
    maxSubarray(arr,n);
    return 0;
}