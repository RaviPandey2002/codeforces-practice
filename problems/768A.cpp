// 768A - Code For 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
        cin>>n;

        vector<int> v(n);
        int mini = INT_MAX, maxi = INT_MIN;

        for(int i=0,x; i<n; i++){
            cin>>x;
            v[i] = x;
            mini = min(mini, x);
            maxi = max(maxi, x);
        }

        for(int i=0; i<n; i++){
            if(mini < v[i] && v[i] < maxi) ans++;
        }
        
        cout<<ans<<endl;

    return 0;
}
