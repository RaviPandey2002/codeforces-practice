// 1200A - Hotelier

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> v(10);
    string s;
    cin>>s;

    for(int i=0; i<n; i++){
        char ch = s[i];

        if(ch == 'L'){
            for(int j=0; j<10; j++){
                if(v[j] == 0){
                    v[j] = 1;
                    break;
                }
            }
        } else if(ch == 'R'){
            for(int j=(10 - 1); j>=0; j--){
                if(v[j] == 0){
                    v[j] = 1;
                    break;
                }
            }
        } else{
            int idx = ch - '0';
            v[idx] = 0;
        }
    }

    for(int i=0; i<10; i++) cout<<v[i];
    cout<<endl;

    return 0;
}
