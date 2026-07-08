// 1285A - Mezo Playing Zoma

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int l=0, r=0;
    for(int i=0, x; i<n; i++){
        cin>>x;
        if(x == 'L') l++;
        else r++;
    }

    cout<< (l + 1 + r)<<endl;
    return 0;
}
