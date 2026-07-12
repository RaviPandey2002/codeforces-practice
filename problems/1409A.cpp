// 1409A - Yet Another Two Integers Problem

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;
        
        int d = abs(b-a);

        cout<<abs((d+10-1)/10)<<endl;
    }
    return 0;
}
