// 1722A - Spell Check

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        if(n != 5) {
            cout<<"NO"<<endl;
            string s;
            cin>>s;
            continue;
        }
        else{
            int t=0,i=0,m=0,u=0,r=0;
            for(int p=0; p<n; p++){
                char x;
                cin>>x;
 
                if(x == 'T') t = 1;
                else if(x == 'i') i = 1;
                else if(x == 'm') m = 1;
                else if(x == 'u') u = 1;
                else if(x == 'r') r = 1;
            }
 
            if( t != 1 || i != 1 || m != 1 || u != 1 || r != 1){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
 
    return 0;
}
