// Problem : 1525A — Potion-making
// Link    : https://codeforces.com/problemset/problem/1525/A
// Rating  : 1100
// Date    : 2026-07-23

// Notes
// - You have k out of 100 parts; reduce the fraction k/100 to lowest terms via GCD.
// - The answer is the sum of numerator + denominator of the reduced fraction.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int val = __gcd(n, 100-n);

        cout<<( n/val + (100-n)/val )<<endl;
    }

    return 0;
}
