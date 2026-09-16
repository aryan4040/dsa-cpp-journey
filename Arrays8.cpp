//Buy and Sell Stocks:

#include<iostream>
#include<climits>
using namespace std;

int maxProfit(int arr[] , int n) {
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for(int i=0;i<n;i++) {
        minPrice = min(minPrice,arr[i]);
        int currProfit = arr[i]-minPrice;
        maxProfit = max(maxProfit,currProfit);
    }
    return maxProfit;
}

int main() {
    int prices[] = {7,1,5,3,6,4};
    int n = sizeof(prices) / sizeof(int);
    cout << maxProfit(prices, n) << endl;
}