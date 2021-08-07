#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, l;
    cin >> n >> l;
    int pos[n];
    // double multiplier = pow(10.0, 9);
    
    for(int i = 0; i < n; i++) {
        int lantern;
        cin >> lantern;

        pos[i] = lantern;
    }

    double minRad = -1;
    sort(pos, pos + n);

    for(int i = 0; i < n - 1; i++) {
        int j = i + 1;

        double rad = (pos[j] - pos[i]) / 2.0;
        if(rad > minRad) {
            minRad = rad;
        }
    }

    if(pos[0] > minRad) {
        minRad = pos[0];
    }

    if(l - pos[n - 1] > minRad) {
        minRad = l - pos[n - 1];
    }

    // minRad = (minRad * multiplier) / multiplier;

    //save this formating for the future
    printf("%.10f\n", minRad);
}