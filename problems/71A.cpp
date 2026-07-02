// Codeforces 71A - Way Too Long Words
// https://codeforces.com/problemset/problem/71/A
// Problem: Given t words, if the word length > 10, abbreviate it as
//          first_letter + (number_of_omitted_letters) + last_letter.
//          Otherwise print the word as-is.

#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while (t--) {
        string s = "";
        cin >> s;

        if (s.size() > 10) {
            cout << s[0] << int(s.size() - 2) << s[s.size() - 1] << endl;
        } else {
            cout << s << endl;
        }
    }
}
