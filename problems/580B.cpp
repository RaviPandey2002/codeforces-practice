// 580B - Kefa and Company

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,d;
    cin>>n>>d;

    vector<pair<int,int>> v(n);
    int a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;

        v[i] = {a,b};
    }

    sort(v.begin(),v.end());

    long long ans=0, ff = 0;
    int i=0;

    for(int j=0; j<n; j++){
        ff += v[j].second;

        while(i<n && (v[j].first-v[i].first) >= d) {
            ff -= v[i].second;
            i++;
        }

        ans = max(ans,ff);
    }
    
    cout<<ans<<endl;

    return 0;
}
