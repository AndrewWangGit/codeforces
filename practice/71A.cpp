#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int length = s.length();

        if(length <= 10) {
            cout << s << '\n';
        } else {
            char first = s.at(0);
            char last = s.at(length - 1);

            cout << first << length - 2 << last << '\n';
        }
    }
}