// Codeforces 282A - Bit++
// https://codeforces.com/problemset/problem/282/A
// Problem: Given t operations (++X / X++ to increment, --X / X-- to decrement),
//          output the final value of X starting from 0.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int x = 0;

    while(t--){
        string s;
        cin >> s;

        if(s[0] == '-' || s[s.size() - 1] == '-') x--;
        else x++;
    }
    cout << x << endl;
}
