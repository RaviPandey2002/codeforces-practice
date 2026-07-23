// Problem : 1611A — Make Even
// Link    : https://codeforces.com/problemset/problem/1611/A
// Rating  : 1100
// Date    : 2026-07-23

// Notes
// - A number is even if its last digit is even. You can also reverse it (check first digit).
// - 0 ops if last digit is even; 1 op if first digit is even (one reverse); 2 ops if any middle digit is even (reverse half); -1 if no even digit exists anywhere.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        if((s[s.size()-1] - '0') % 2 == 0) {
            cout<<0<<endl;
            continue;
        }
        if((s[0] - '0') % 2 == 0) {
            cout<<1<<endl;
            continue;
        }

        int ans = -1;

        for(int i=1; i<(int)s.size()-1; i++){
            if((s[i] - '0')%2 == 0){
                ans = 2;
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
