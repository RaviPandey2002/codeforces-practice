// 1703A - YES or YES?

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        char a,b,c;
        cin>>a>>b>>c;

        if(a != 'Y' && a != 'y'){
            cout<<"NO"<<endl;
            continue;
        } 
        
        if(b != 'E' && b != 'e'){
            cout<<"NO"<<endl;
            continue;
        } 
        
        if(c != 'S' && c != 's'){
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
    }

    return 0;
}
