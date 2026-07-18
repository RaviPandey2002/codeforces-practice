// 1811A - Insert Digit

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
        int n, d;
        cin>>n>>d;

        string s, ans = "";
        cin>>s;

        char sd = d + '0';
        bool inserted = false;

        for (char c : s) {
            if (!inserted && c < sd) {
                cout << sd;
                inserted = true;
            }
            cout << c;
        }

        if (!inserted)
            cout << sd;

        cout << '\n';     
    }
 
    return 0;
}
