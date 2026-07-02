// Codeforces 4A - Watermelon
// https://codeforces.com/problemset/problem/4/A
// Problem: Given a watermelon of weight n, check if it can be split into
//          two even positive parts. Print YES if possible, NO otherwise.

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin>>n;

    if(n <= 2 || n % 2) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
}