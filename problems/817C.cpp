// 817C - Really Big Numbers

#include <bits/stdc++.h>
using namespace std;

bool check(long long n, long long s){
    long long ds = 0, a=n;
    while(a > 0){
        ds += a % 10;
        a /= 10;
    }
    return (n - ds >= s);
}

int main() {
    long long n,s;
    cin>>n>>s;

    long long ans = n+1;

    long long i=0, j=n;

    while(i<=j){
        long long mid = i + (j-i)/2;
        
        if(check(mid,s)){
            ans = mid;
            j=mid-1;
        }else{
            i=mid+1;
        }
    }
    
    if (ans == n + 1)
        cout << 0;
    else
        cout << n - ans + 1;

    return 0;
}
