// 352A - Jeff and Digits

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int f=0, z=0;

    for(int i=0,x; i<n; i++){
        cin>>x;

        if(x == 5) f++;
        else z++;
    }

    if(z == 0) {
        cout<<-1<<endl;
        return 0;
    }
    if(f < 9) {
        cout<<0<<endl;
        return 0;
    }

    f = (f/9) * 9;

    while(f--) cout<<5;
    while(z--) cout<<0;

    return 0;
}
