// 546B - Soldier and Badges

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0,x; i<n; i++){
        cin>>x;
        v[i] = x ;
    }

    sort(v.begin(),v.end());

    int cnt = 0;

    for(int i=1; i<n; i++){
        if(v[i] <= v[i-1]){
            int d = (v[i-1] - v[i] + 1);
            cnt += d;
            v[i] += d;
        }
    }
    cout<<cnt<<endl;    

    return 0;
}
