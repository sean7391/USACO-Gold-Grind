// Apartments: https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
typedef long long ll;
typedef vector<ll> vl;

int main() {
    ll n, m, k, t, i, j = 0, cnt = 0;
    vl a, b;
    cin >> n >> m >> k;
    
    i = m;
    while (i--){
        cin >> t;
        a.pb(t);
    } sort(a.begin(), a.end());
    
    i = n;
    while (i--){
        cin >> t;
        b.pb(t);
    } sort(b.begin(), b.end());
    
    i = 0;
    while (j < m && i < n){
        if (a[i] + k < b[j])
            i++;
        else if (a[i] - k > b[j])
            j++;
        else{
            i++;
            j++;
            cnt++;
        }
    }
    
    cout << cnt;
}