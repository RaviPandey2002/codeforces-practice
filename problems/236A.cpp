// 236A - Boy or Girl

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int cnt = 0;

    vector<int> a(26,0);
    for(int i=0; i<s.size(); i++){
        a[s[i] - 'a'] = 1;
    }

    for(int i=0; i<26; i++){
        if(a[i]) cnt++;
    }

    if(cnt & 1) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;

}
