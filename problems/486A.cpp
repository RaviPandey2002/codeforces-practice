// 486A - Calculating Function

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ll n;
    cin>>n;
    ll ans = 0;

    if(n % 2 == 0) ans = n/2;
    else ans = -1 * ( (n+1)/2 );

    cout<<ans<<endl;

    return 0;
}
