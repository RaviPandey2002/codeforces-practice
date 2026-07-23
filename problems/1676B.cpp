// Problem : 1676B — Equal Candies
// Link    : https://codeforces.com/problemset/problem/1676/B
// Rating  : 1100
// Date    : 2026-07-23

// Notes
// - To make all boxes equal, the best target is the minimum value (you can only remove).
// - Sum up the difference of each element from the minimum — that's total removals needed.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int minCandy = INT_MAX, ans = 0;
        vector<int> v(n);

        for(int i=0; i<n; i++){
            cin>>v[i];
            minCandy = min(minCandy, v[i]);
        }

        for(int i=0; i<n; i++) ans += abs(v[i] - minCandy);

        cout<<ans<<endl;
    }

    return 0;
}
