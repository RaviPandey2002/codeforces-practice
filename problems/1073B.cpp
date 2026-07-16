// 1073B - Vasya and Books

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0,x; i<n; i++){
        cin>>x;

        v[x-1] = i;
    }

    int j=0;

    for(int i=0,x; i<n; i++){
        cin>>x;

        if(j <= v[x-1]){
            cout<<(v[x-1] - j + 1)<<" ";
            j = v[x-1] + 1;
        }else{
            cout<<0<<" ";
        }
    }

    return 0;
}
