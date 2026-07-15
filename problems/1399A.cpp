// 1399A - Remove Smallest

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int f=0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        sort(v.begin(), v.end());

        for(int i=1; i<n; i++){
            if(abs(v[i-1] - v[i]) > 1) {
                f=1;
            }
        }

        if(f) cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}
