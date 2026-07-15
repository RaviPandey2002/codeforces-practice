// 1133B - Preparation for International Olympiad

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;

    vector<int> v(k);
    for(int i=0,x; i<n; i++){
        cin>>x;

        v[x%k]++;
    }

    int ans = v[0]/2;

    for(int i=1; i <= (k - 1) / 2; i++){
        ans += min(v[i], v[k-i]);
    }

    if(k % 2 == 0) ans += v[k/2]/2;

    cout<<(ans * 2)<<endl;

    return 0;
}
