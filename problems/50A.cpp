// Codeforces 50A - Domino Piling
// https://codeforces.com/problemset/problem/50/A
// Problem: Given an m x n board, find the maximum number of non-overlapping
//          1x2 dominoes that can be placed on it.
// Note: (m * n) / 2 is the optimal formula — each domino covers exactly 2 cells,
//       so the answer is always floor(total_cells / 2). No simulation needed.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << ((a * b) / 2) << endl;
}
