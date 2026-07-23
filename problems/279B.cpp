// Problem : 279B — Books
// Link    : https://codeforces.com/problemset/problem/279/B
// Rating  : 1200
// Date    : 2026-07-23

// Notes
// - Find the longest contiguous subarray whose sum <= b (sliding window / two pointers).
// - Expand the right end, shrink the left end whenever the sum exceeds b.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    int ans = 0;
    vector<int> v(a);

    for(int i=0; i<a; i++) cin>>v[i];
    
    int i=0, j=0, cs = 0;

    while(i<a && j<a){
        cs += v[j++];
        while(cs > b ){
            cs -= v[i];
            i++;
        }

        ans = max(ans, (j-i));
    }

    cout<<ans<<endl;

    return 0;
}
