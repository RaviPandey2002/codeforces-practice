// 381A - Sereja and Dima

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0,x; i<n; i++){
        cin>>x;
        v[i] = x;
    }
    
    int i=0, j=n-1;
    int s=0, d=0, t=0;

    while(i<=j){
        if(v[i] >= v[j]){
            if(t == 0){
                s += v[i];
                t = 1;
            }else{
                d += v[i];
                t = 0;
            }
            i++;
        }else{
            if(t == 0){
                s += v[j];
                t = 1;
            }else{
                d += v[j];
                t = 0;
            }
            j--;
        }
    }

    cout<<s<<" "<<d<<endl;    

    return 0;
}
