#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        map<string,int> mp;
        bool f = false;

        for(int i=0; i<n-1; i++){
            string c = s.substr(i,2);

            if(mp.count(c)){
                if(mp[c] != i-1){
                    f = true;
                    break;
                }
            }else{
                mp[c] = i;
            }
        }

        cout<< (f ? "YES\n" : "NO\n");
    }

    return 0;
}
