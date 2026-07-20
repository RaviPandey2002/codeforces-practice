#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int mini;
        cin>>mini;
        
        for(int i=1,x; i<n; i++){
            cin>>x;
            mini &= x;
        }
        cout<<mini<<endl;
    }

    return 0;
}
