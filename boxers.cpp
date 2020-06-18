// Boxers: https://codeforces.com/problemset/problem/1203/E

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
typedef long long ll;
typedef vector<ll> vl;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;
    vector<int> v;
    
    while(n--){
        int t; cin >> t;
        v.pb(t);
    }
    
    sort(v.begin(), v.end());
    
    if (v[0] > 1)
        v[0]--;
    
    for (int i = 1; i < v.size(); i++){
        if (v[i] == v[i - 1])
            v[i]++;
        else if (v[i] - 1 > v[i - 1])
            v[i]--;
        else if (v[i] + 1 <= v[i - 1]){
            v.erase(v.begin() + i);
            i--;
        }
    }
    
    cout << v.size() << endl;
}