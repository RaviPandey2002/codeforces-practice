// 1352B - Same Parity Summands

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        if(n < k) cout<<"NO"<<endl;
        else if(n % k == 0) {
            cout<<"YES"<<endl;
            for(int i=0; i<k; i++) cout<<n/k<<" ";
            cout<<endl;
        }else{
            
            int rem = n%k;
            int div = n/k;

            if( (div + rem) % 2 == 0 ){
                if(div % 2 == 0){
                    cout<<"YES"<<endl;
                    for(int i=0; i<(k-1); i++) cout<<div<<" ";
                    cout<<(div + rem)<<endl;
                }else{
                    if((k-1)%2 == 0 && div > 1) {
                        cout<<"YES"<<endl;
                        for(int i=0; i<(k-1)/2; i++) 
                            cout<<div - 1<<" "<<div+1<<" ";
                        cout<<(div + rem)<<endl;
                    }else{
                        cout<<"NO"<<endl;
                    }
                }
            }else{
                if(div % 2 != 0){
                    cout<<"YES"<<endl;
                    for(int i=0; i<(k-1); i++) cout<<div<<" ";
                    cout<<(div + rem)<<endl;
                }else{
                    if((k-1)%2 == 0) {
                        cout<<"YES"<<endl;
                        for(int i=0; i<(k-1)/2; i++) 
                            cout<<div - 1<<" "<<div+1<<" ";
                        cout<<(div + rem)<<endl;
                    }else{
                        cout<<"NO"<<endl;
                    }
                }
            }

        }
    }

    return 0;
}
