// Problem : 1057A — Booking a Room
// Link    : https://codeforces.com/problemset/problem/1057/A
// Rating  : 1000
// Date    : 2026-07-23

// Notes
// - Each room stores the index of the room that referred it (parent pointer).
// - Walk back from room n to room 1 following parent pointers, then reverse to get the path.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> v(n+1);
    vector<int> ans;

    v[1] = 0;

    for(int i=2,x; i<=n; i++){
        cin>>v[i];
    }

    int curr = n;
    
    while(curr != 0){
        ans.push_back(curr);
        curr = v[curr];
    }

    reverse(ans.begin(),ans.end());
    for(int i=0; i<(int)ans.size(); i++) cout<<ans[i]<<" ";

    return 0;
}
