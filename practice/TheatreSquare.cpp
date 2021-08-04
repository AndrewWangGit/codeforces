#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long n, m, a;
    cin >> n >> m >> a;

    long width = ceil((double) n / a);
    long height = ceil((double) m / a);

    ll tiles = width * height; 

    cout << tiles;
}