// 1374A - Required Remainder

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int rem = c%a;

        if(rem == b) cout<<c<<endl;
        else{
            if(rem > b) {
                int d = rem - b;
                cout<<(c-d)<<endl;
            }else{
                int d = (rem + (a - b));
                cout<<(c-d)<<endl;
            }
        }
    }

    return 0;
}
