// Codeforces 791A - Bear and Prime 100
// https://codeforces.com/problemset/problem/791/A
// Problem: Given a and b, repeatedly triple a and double b.
//          Count how many steps until a > b. If a > b already, output 0.
// Learning: Sometimes just simulating exactly what the problem asks gives the correct answer.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a > b) return 0;
    int i = 1;

    for(i; i <= 10; i++){
        a *= 3;
        b *= 2;
        if(a > b) break;
    }
    cout << i << endl;
}
