// 1512A - Spy Detected!

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n;

        int a,b,c;
        cin>>a>>b>>c;

        int i=3;

        if(c == a && c != b){
            cout<<2<<endl;
        }else if(c == b && c != a){
            cout<<1<<endl;
        }else if(c != a || c != b){
            cout<<3<<endl;
        }else{
            for(i; i<n; i++ ){
                cin>>x;
                if(x != a && x != b) cout<<i+1<<endl;
            }
        } 
        for(i; i<n; i++ ){
                cin>>x;
            }
    }

    return 0;
}
