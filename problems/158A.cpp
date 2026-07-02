// Codeforces 158A - Next Round
// https://codeforces.com/problemset/problem/158/A
// Problem: Given n participants sorted by score and a cut-off rank k,
//          count how many participants advance (score > 0 and score >= score[k-1]).

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt = 0;
    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] > 0 && a[i] >= a[k - 1]) cnt++;
    }
    cout << cnt << endl;
}
