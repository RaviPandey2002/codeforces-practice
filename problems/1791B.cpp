// 1791B - Following Directions

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    map<char, pair<int, int>> mp{
        {'U', {0, 1}},
        {'D', {0, -1}},
        {'R', {1, 0}},
        {'L', {-1, 0}}
    };
 
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        bool f = false;

        pair<int,int> pos = {0,0};
        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            pair<int,int> v = mp[ch];
            pos = { pos.first + v.first, pos.second + v.second};

            if(pos.first == 1 && pos.second == 1){
                f = true;
                break;
            }
        }

        cout<< ( f ? "YES" : "NO" )<<endl;
    }
 
    return 0;
}
