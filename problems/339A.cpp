// Codeforces 339A - Helpful Maths
// https://codeforces.com/problemset/problem/339/A
// Problem: Given an arithmetic expression of single digits separated by '+',
//          rearrange and output the numbers in non-decreasing order.
// Learning: There are various ways to solve a single problem.
//
// Better alternative: extract digits into a vector, sort, then join with '+'.
// This avoids relying on '+' being sorted before digits and the boolean flag:
//
//   vector<char> digits;
//   for(char c : s) if(c != '+') digits.push_back(c);
//   sort(digits.begin(), digits.end());
//   for(int i = 0; i < (int)digits.size(); i++){
//       if(i) cout << '+';
//       cout << digits[i];
//   }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    bool f = true;

    for(int i = 0; i < (int)s.size(); i++){
        if(f && s[i] != '+') {
            cout << s[i];
            f = false;
        } else if(!f && s[i] != '+') {
            cout << '+';
            cout << s[i];
        }
    }

    cout << endl;
}
