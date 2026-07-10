// 1360A - Minimal Square

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        int minSide = min( max(2*a,b), max(a, 2*b) );
        cout<<minSide*minSide<<endl;
    }

    return 0;
}
