#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

// returns the value of the smallest element in an integer array
int min_element(int arr[], int len) {
    int min_element = INT_MAX;
    for(int i = 0; i < len; i++) {
        if(min_element > arr[i]) {
            min_element = arr[i];
        }
    }

    return min_element;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        // inputs
        int m;
        cin >> m;
        int board[2][m];
        int prefixSum[m];
        int suffixSum[m];
        int coin;
        for(int j = 0; j < m; j++) {
            cin >> coin;
            board[0][j] = coin;
        }
        for(int j = 0; j < m; j++) {
            cin >> coin;
            board[1][j] = coin;
        }

        suffixSum[m-1] = 0;
        for(int j = m - 2; j >= 0; j--) {
            suffixSum[j] = suffixSum[j+1] + board[0][j+1];
        }

        prefixSum[0] = 0;
        for(int j = 1; j < m; j++) {
            prefixSum[j] = prefixSum[j-1] + board[1][j-1];
        }

        int maxArray[m];

        for(int j = 0; j < m; j++) {
            if(suffixSum[j] > prefixSum[j]) {
                maxArray[j] = suffixSum[j];
            } else {
                maxArray[j] = prefixSum[j];
            }
        }

        cout << min_element(maxArray, m) << "\n";
    }
}