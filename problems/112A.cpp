// 112A - Petya and Strings

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
