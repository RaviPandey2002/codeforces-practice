// Problem : 1352C — K-th Not Divisible by n
// Link    : https://codeforces.com/problemset/problem/1352/C
// Rating  : 1100
// Date    : 2026-07-23

// Notes
// - Every group of (n-1) non-multiples is followed by one multiple of n.
// - For the k-th non-multiple: how many full groups fit? d = (k-1)/(n-1).
// - Answer = k + d  (shift k forward by the number of multiples skipped).

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int d = (k-1)/(n-1);

        cout<<(k + d)<<endl;
    }

    return 0;
}
