// 1679A - Ants

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
        long long n;
        cin>>n;

        if((n%2 != 0) || n<4) {
            cout<<-1<<endl;
            continue;
        }
    
        long long minCnt = (n+5)/6, maxCnt = n/4;

        cout<<minCnt<<" "<<maxCnt<<endl;
    }
 
    return 0;
}
