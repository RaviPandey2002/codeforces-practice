// Codeforces 1030A - In Search of an Easy Problem
// https://codeforces.com/problemset/problem/1030/A
// Problem: Given t problems each with difficulty (0 = easy, 1 = hard).
//          If any problem is hard output "HARD", otherwise output "EASY".
//
// Better alternative: use an explicit flag instead of relying on the last
// value of 'a' after the loop, which would be wrong if all inputs are 0:
//
//   bool hard = false;
//   while(t--){
//       cin >> a;
//       if(a == 1) { hard = true; break; }
//   }
//   cout << (hard ? "HARD" : "EASY") << endl;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a;
    cin >> t;
    while(t--){
        cin >> a;
        if(a == 1) break;
    }
    if(a == 1) cout << "HARD" << endl;
    else cout << "EASY" << endl;
}
