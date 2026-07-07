// 734A - Anton and Danik

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin>>n>>s;
    int cnt = 0;

    for(int i=0; i<n; i++) 
        if(s[i] == 'A') cnt++;
        else cnt--;

    if(cnt == 0) cout<<"Friendship"<<endl;
    else if(cnt >= 1) cout<<"Anton"<<endl;
    else cout<<"Danik"<<endl;

    return 0;
}
