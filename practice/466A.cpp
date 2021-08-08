#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    //it doesn't make sense at all to buy the multi pass
    if (m * a < b) {
        cout << n * a << "\n";
    } else if(b * (n / m + 1) < (n / m) * b + (n % m) * a) {
        cout << b * (n / m + 1) << "\n";
    } else {
        cout << (n / m) * b + (n % m) * a << "\n";
    }
}