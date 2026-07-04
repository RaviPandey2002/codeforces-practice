// 268A (second solution - pangram check)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    if(n < 26) {
        cout<<"NO"<<endl;
        return 0;
    }

    string s;
    cin>>s;

    vector<int> a(26,0);

    for(int i=0; i<n; i++){
        char x = (char) tolower(s[i]);
        a[x - 'a'] = 1;
    }

    for(int i=0; i<26; i++){
        if(a[i] == 0) {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}
