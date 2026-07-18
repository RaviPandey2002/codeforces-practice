// 1703B - ICPC Balloons

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

        vector<int> v(26);
        int baloons = 0;

        for(int i=0; i<n; i++){
            char ch = s[i];

            if(v[ch - 'A']) baloons++;
            else {
                baloons += 2;
                v[ch - 'A'] = 1;
            }
        }

        cout<<baloons<<endl;
    }
 
    return 0;
}
