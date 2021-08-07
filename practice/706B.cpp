#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

// returns the value of the largest element in an integer array
int max_element(int arr[], int len) {
    int max_element = INT_MIN;
    for(int i = 0; i < len; i++) {
        if(max_element < arr[i]) {
            max_element = arr[i];
        }
    }

    return max_element;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int price[n];

    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;
        price[i] = p;
    }

    int maxPrice = max_element(price, n);

    int priceCount[maxPrice];
    for(int i = 0; i < maxPrice; i++) {
        priceCount[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        priceCount[price[i]]++;
    }

    int prefixSumArray[maxPrice];
    prefixSumArray[0] = priceCount[0];

    for(int i = 1; i < maxPrice; i++) {
        prefixSumArray[i] = prefixSumArray[i - 1] + priceCount[i];
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++) {
        int m;
        cin >> m;

        if(m >= maxPrice) {
            cout << n << "\n";
        } else {
            cout << prefixSumArray[m] << "\n";
        }
    }
}