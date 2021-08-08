#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

// returns the sum of all the elements in an integer array
int sum_elements(int arr[], int len) {
    int sum = 0;
    for(int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int d, sumTime;
    cin >> d >> sumTime;

    int minTime[d];
    int maxTime[d];

    for(int i = 0; i < d; i++) {
        int min, max;
        cin >> min >> max;

        minTime[i] = min;
        maxTime[i] = max;
    }

    int minSum = sum_elements(minTime, d);
    int maxSum = sum_elements(maxTime, d);

    if(sumTime < minSum || sumTime > maxSum) {
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
        int timeStudied[d];
        for(int i = 0; i < d; i++) {
            timeStudied[i] = minTime[i];
        }

        int difference = sumTime - minSum;

        for(int i = 0; i < d; i++) {
            int timeAdd = maxTime[i] - minTime[i];
            if(timeAdd <= difference) {
                timeStudied[i] += timeAdd;
                difference -= timeAdd;
            } else if(difference == 0) {
                break;
            } else {
                timeStudied[i] += difference;
                difference = 0;
            }
        }

        for(int i = 0; i < d; i++) {
            cout << timeStudied[i] << " ";
        }
    }
}