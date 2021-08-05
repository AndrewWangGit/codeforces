#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    int prob = 0;
    for(int i = 0; i < n; i++) {
        int p;
        int v;
        int t;

        cin >> p >> v >> t;;

        if(p + v + t >= 2) {
            prob++;
        }
    }

    cout << prob;
}