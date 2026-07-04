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


// 617A
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int ans = 0;
    ans += n/5;
    ans += (n%5) ? 1 : 0;
    cout<<ans<<endl;
}

// 112A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;

    int i=0;

    for(i; i<a.size(); i++){
        if((char)tolower(a[i]) > (char)tolower(b[i])){
            cout<<"1"<<endl;
            break;
        }

        if((char)tolower(a[i]) < (char)tolower(b[i])){
            cout<<"-1"<<endl;
            break;
        }
    }

    if(i == a.size()) cout<<"0"<<endl;

    return 0;
}

// 268A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin>>n;

    vector<vector<int>> a;
    vector<int> b(2);

    for(int i=0; i<n; i++){
        cin>>b[0]>>b[1];
        a.push_back(b);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j) continue;

            if(a[i][0] == a[j][1]) ans++;
            
        }
    }
    cout<<ans<<endl;
}

// 268A

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