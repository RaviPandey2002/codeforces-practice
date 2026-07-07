// 546A - Soldier and Bananas

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k, n, w;
    cin >>k >> n >> w;
 
    int totalCost = k * ((w*(w+1))/2);
 
    if(totalCost <= n) cout<<0<<endl;
    else{
        cout<<(totalCost - n)<<endl;
    }
    return 0;
}
