// 1650A - Deletions of Two Adjacent Letters

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
        string s;
        cin>>s;
        
        char ch;
        cin>>ch;
 
        if(s.size() % 2 == 0){
            cout<<"NO"<<endl;
            continue;
        }
 
        bool itsTrue = false;
 
        for(int i=0; i<s.size(); i++){
            if(s[i] == ch){
                if(i == (s.size()/2)){
                    cout<<"YES"<<endl;
                    itsTrue = true;
                }
            }
        }
 
        if(!itsTrue) cout<<"NO"<<endl;
    }
 
    return 0;
}
