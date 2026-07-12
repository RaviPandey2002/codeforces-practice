// 1234A - Equalize Prices Again

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n, s=0;
        cin>>n;

        for(int i=0,x; i<n; i++){
            cin>>x;
            s += x;
        }
        cout<<(s+n-1)/n<<endl;    
    }

    return 0;
}
