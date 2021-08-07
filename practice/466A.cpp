#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if(n < m && n * a < b) {
        cout << n * a << "\n";
    } else if(n < m) {
        cout << b << "\n";
    } else if((double) b / m < a) {
        cout << ((n % m) * a) + ((n / m) * b) << "\n";
    } else {
        cout << n * a << "\n";
    }
}