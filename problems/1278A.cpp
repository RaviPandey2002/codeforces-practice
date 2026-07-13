// 1278A - Shuffle Hashing

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        string password,hash;
        cin>>password>>hash;

        if(password.size() > hash.size()){
            cout<<"NO"<<endl;
            continue;
        }

        vector<int> v(26), w(26);
        bool f = 0;

        for(int i=0; i<password.size(); i++) v[password[i] - 'a']++;

        int start = 0;
        for(int i=0; i<hash.size(); i++){

            if((i+1) > (password.size())){
                w[hash[start] - 'a']--;
                start++;
            }

            w[hash[i] - 'a']++;

            if(v == w) {
                cout<<"YES"<<endl;
                f = 1;
                break;
            }
        }

        if(f == 0) cout<<"NO"<<endl;
    }

    return 0;
}
