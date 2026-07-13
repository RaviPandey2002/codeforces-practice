// 116A - Tram

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    int currentPassengers = 0, ans = 0;
    while(t--){
        int exit, enter;
        cin>>exit>>enter;

        currentPassengers += (enter - exit);
        ans = max(ans, currentPassengers);        
    }

    cout<<ans<<endl;

    return 0;
}
