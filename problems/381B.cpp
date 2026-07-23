// Problem : 381B — Sereja and Suffixes
// Link    : https://codeforces.com/problemset/problem/381/B
// Rating  : 1200
// Date    : 2026-07-23

// Notes
// - The suffix maximum array keeps only values that are >= the current running maximum from the right.
// - Build the set of distinct suffix-max values; for each query just count how many are >= a[i].
// - Using a sorted structure + map to cap duplicates at 2 lets you reconstruct the suffix-max sequence.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    map<int,int> v;
    int maxi = INT_MIN;

    for(int i=0,x; i<n; i++){
        cin>>x;

        maxi = max(maxi,x);
        v[x] = min(v[x] + 1, 2);
    }

    v[maxi] = 1;

    vector<int> ans;

    for(auto x: v){
        ans.push_back(x.first);
        v[x.first]--;
    }

    for(auto it = v.rbegin(); it != v.rend(); it++){
        if(it->second == 1){
            ans.push_back(it->first);
        }
    }

    cout<<ans.size()<<endl;
    for(auto &x: ans) cout<<x<<" ";
    cout<<endl;

    return 0;
}
