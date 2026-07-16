// 1475A - Strange Birthday Party

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        bool isOddDivisible = 0;

        while(n > 1){
            if(n % 2 != 0) {
                isOddDivisible = 1;
                break;
            }
            n = n>>1;
        }

        if(isOddDivisible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
