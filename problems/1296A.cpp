// 1296A - Array with Odd Sum

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        int even=0, odd=0;
 
        for(int i=0,x; i<n; i++){
            cin>>x;
 
            if(x % 2) odd++;
            else even++;
 
        }
 
        if(odd == 0) cout<<"NO";
        else if (even == 0){
            if(odd % 2) cout<<"YES";
            else cout<<"NO";
        } else{
            cout<<"YES";
        }
        cout<<endl;
    }
 
    return 0;
}
