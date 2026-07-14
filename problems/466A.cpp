// 466A - Cheap Travel

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    if(n > m && n%m == 0){
        if(a > (b/m)){
            cout<<b*(n/m)<<endl;
        }
        else {
            cout<<(n*a)<<endl;
        }
    }else{
        int cost = 0;
        int rem = n%m;

        cost += (n/m) * b;
        cost += min(b, rem * a);

        cout<<cost<<endl;
    }

    return 0;
}
