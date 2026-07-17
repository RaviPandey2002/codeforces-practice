// 1374B - Multiply by 2, Divide by 6

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n, cnt2=0, cnt3=0, ans=0;
        cin>>n;

        while(n > 1){
            if(n%2 == 0) {
                cnt2++;
                n /=2 ;
            }
            else if(n%3 == 0) {
                cnt3++;
                n /= 3;
            }
            else break;
        }

        if(n == 1){
            if(cnt2 > cnt3) cout<<-1<<endl;
            else cout<<(cnt3 - cnt2 + cnt3)<<endl;
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
}
