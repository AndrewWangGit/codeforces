#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int numOne = 0;
    int numTwo = 0;
    int numThree = 0;
    int numFour = 0;

    int taxis = 0;

    for(int i = 0; i < n; i++) {
        int size;
        cin >> size;

        if(size == 1) {
            numOne++;
        } else if (size == 2) {
            numTwo++;
        } else if (size == 3) {
            numThree++;
        } else {
            numFour++;
        }
    }

    taxis += numFour;
    taxis += numThree;

    numOne -= numThree;

    if(numOne < 0) {
        numOne = 0;
    }

    taxis += numTwo / 2;
    numTwo %= 2;

    if(numTwo == 1) {
        taxis++;
        numOne -= 2;
    }

    if(numOne < 0) {
        numOne = 0;
    }

    taxis += numOne / 4;
    numOne %= 4;
    
    if(numOne != 0) {
        taxis++;
    }

    cout << taxis;
}