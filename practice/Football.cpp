#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string num;
    cin >> num;

    char team = num[0];
    int lineCount = 1;
    bool dang = false;

    for(int i = 1; i < num.length(); i++) {
        if(team == num[i]) {
            lineCount++;
        } else {
            team = num[i];
            lineCount = 1;
        }
        
        if(lineCount == 7) {
            dang = true;
            break;
        } 
    }

    if(dang) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}