// Yet Another Meme Problem: https://codeforces.com/problemset/problem/1288/B

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

int main(){
    ll t; cin >> t;
    while (t--){
        ll a, b, cnt = 0; cin >> a >> b;
        cout << a * (ll)(floor(log10(b + 1) + 1) - 1) << endl;
    }
}

