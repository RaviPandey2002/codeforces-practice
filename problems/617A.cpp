// 617A - Elephant

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
