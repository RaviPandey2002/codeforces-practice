// Problem : 1461A — String Generation
// Link    : https://codeforces.com/problemset/problem/1461/A
// Rating  : 1100
// Date    : 2026-07-23

// Notes
// - Need a string of length n with no "abc" subsequence and all 3 chars present.
// - Repeating "abcabc..." cyclically never forms "abc" as a subsequence gap — wait,
//   actually the key insight: repeating "abc" cyclically works because the problem
//   asks for at most k distinct subsequences, and cycling keeps count low.
// - Just print "abc" repeated cyclically for n characters.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string str = "abc";
        for(int i=0; i<n; i++) cout<<str[i%3];
        cout<<endl;
    }

    return 0;
}
