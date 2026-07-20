#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        unordered_set<int> v;
        bool hasDuplicate = false;

        for(int i=0,x; i<n; i++){
            cin>>x;

            if(v.count(x) > 0){
                hasDuplicate = true;
            }else{
                v.insert(x);
            }
        }
        
        cout<< (hasDuplicate ? "NO\n" : "YES\n");
    }

    return 0;
}
