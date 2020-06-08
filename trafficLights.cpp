// Traffic Lights: https://cses.fi/problemset/task/1163

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
typedef long long ll;
typedef vector<ll> vl;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x, n, point, left, right;
    cin >> x >> n;
    set<ll> points = {0, x};
    multiset<ll> lengths = {x};
  
    while(n--){
        cin >> point;
        
        auto it = points.upper_bound(point);
        left = *prev(it);
        right = *it;
        
        lengths.erase(lengths.find(right - left));
        lengths.insert(point - left);
        lengths.insert(right - point);
        
        points.insert(it, point);
        
        cout << *lengths.rbegin() << " ";
    }
    
    return 0;
}