// 580A - Kefa and First Steps

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int ans = 0, temp = 0;
    for(int i=0,x=-1,y; i<n; i++){
        cin>>y;

        if( y >= x ) temp++;
        else {
            ans = max(ans, temp);
            temp = 1;
        }
        x = y;
    }
    ans = max(ans, temp);
    
    cout<<ans<<endl;
    return 0;
}
