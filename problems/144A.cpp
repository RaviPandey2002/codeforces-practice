// 144A - Arrival of the General

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,n;
    cin>>n;

    a = n;

    int maxi=0, mini=INT_MAX;
    int i=0, j=0, idx=0, x;

    while(n--){
        cin>>x;
        if(x > maxi) {
            maxi = x;
            i = idx;
        } 
        if(x <= mini){
            mini = x;
            j = idx;
        }
        idx++;
    }

    int extra = i > j ? -1 : 0;
    
    cout<<(i + (a-j-1) + extra)<<endl;

    return 0;
}
