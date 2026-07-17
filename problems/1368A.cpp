// 1368A - C+=

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        long long a,b,n,cnt=0;
        cin>>a>>b>>n;

        while( a <= n && b <= n){
            if(a<b) a += b;
            else b += a;
            cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
