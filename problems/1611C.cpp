// Problem : 1611C — Polycarp Recovers
// Link    : https://codeforces.com/problemset/problem/1611/C
// Rating  : 1200
// Date    : 2026-07-23

// Notes
// - The largest element must be at one of the two ends (first or last); otherwise output -1.
// - If it's at the start, grow from the right end inward using a two-pointer merge:
//   always pick the smaller of v[i] and v[j] to fill the left side, the rest go right.
// - Output left side reversed + max element + right side in order.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        int idx = 0;

        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[idx] < v[i]) idx = i;
        }

        if(idx != 0 && idx != (int)v.size()-1){
            cout<<-1<<endl; 
        }else{
            vector<int> l,r;
            int i=0, j=v.size()-1;

            if(idx == 0) i++;
            else j--;

            while(i<=j){
                if(v[i] <= v[j]) {
                    l.push_back(v[i]);
                    i++;
                }
                else{
                    r.push_back(v[j]);
                    j--;
                }
            }

            for(auto it = l.rbegin(); it != l.rend(); it++)
                cout<<((*it))<<" ";
            
            cout<<v[idx]<<" ";

            for(auto it = r.begin(); it != r.end(); it++)
                cout<<(*it)<<" ";

            cout<<endl;
        }
    }

    return 0;
}
