// Problem : 1367B — Even Array
// Link    : https://codeforces.com/problemset/problem/1367/B
// Rating  : 1100
// Date    : 2026-07-23

// Notes
// - Need exactly n/2 odd numbers; if not, output -1.
// - Odd numbers must sit at odd indices (1-indexed) and even numbers at even indices.
// - Count how many odds are currently at even indices — each needs one swap, so that's the answer.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ans = 0, oddCnt = 0;
        for(int i=0,x; i<n; i++){
            cin>>x;

            if(x%2 != 0) {
                oddCnt++;
                if(i%2 != x%2) ans++;
            }   
        }

        if(oddCnt != n/2) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
