// 1221A - 2048 Game

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        vector<int> v(12);

        int n;
        cin>>n;

        bool has2048 = false;

        for(int i=0,x; i<n; i++){
            cin>>x;

            if(x == 2048) has2048 = true;
            
            if(x <= 2048){
                int idx = log2(x);
                v[idx]++;
            }
        }

        if(has2048){
            cout<<"YES"<<endl;
            continue;
        }

        for(int i=0; i<11; i++){
            int cnt = v[i]/2;
            v[i+1] += cnt;
        }

        if(v[11] >= 1) {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
