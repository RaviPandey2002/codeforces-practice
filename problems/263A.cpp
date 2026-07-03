// Codeforces 263A - Beautiful Matrix
// https://codeforces.com/problemset/problem/263/A
// Problem: Find the position of 1 in a 5x5 matrix and output the minimum
//          number of moves (Manhattan distance) to bring it to the center (3,3).
// Learning: We don't always have to store values — calculate on the fly and return immediately.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    int x;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> x;
            if(x == 1){
                ans += abs(3 - i);
                ans += abs(3 - j);
                cout << ans << endl;
                return 0;
            }
        }
    }
}
