// 268A - Games

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin>>n;

    vector<vector<int>> a;
    vector<int> b(2);

    for(int i=0; i<n; i++){
        cin>>b[0]>>b[1];
        a.push_back(b);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j) continue;

            if(a[i][0] == a[j][1]) ans++;
            
        }
    }
    cout<<ans<<endl;
}
