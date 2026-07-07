// 978A - Remove Duplicates

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ab(n);
    for (int i = 0; i < n; i++) {
        cin >> ab[i];
    }

    set<int> seen;
    vector<int> a;

    for (int i = n - 1; i >= 0; i--) {
        if (!seen.count(ab[i])) {
            seen.insert(ab[i]);
            a.push_back(ab[i]);
        }
    }

    reverse(a.begin(), a.end());

    cout << a.size() << "\n";
    for (int x : a)
        cout << x << " ";
    
    return 0;
}
