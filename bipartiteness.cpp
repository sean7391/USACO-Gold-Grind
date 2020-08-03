// Mahmoud and Ehab and the bipartiteness: https://codeforces.com/contest/862/problem/B

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define endl "\n"

typedef long long ll;

const int MAXN = 1e5 + 10;

bool visited[MAXN], group[MAXN];
vector<int> a[MAXN];

void dfs(int n, bool g = 0){
    visited[n] = true;
    group[n] = g;
    for (int u : a[n]){
        if (!visited[u])
            dfs(u, !g);
    }
}


int main() {
    int n; cin >> n;
    for (int i = 0; i < n - 1; i++){
        ll u, v; cin >> u >> v;
        a[u].pb(v); a[v].pb(u);
    }
    
    for (int i = 1; i <= n; i++)
        if (!visited[i])
            dfs(i);
    
    ll l = 0, r = 0;
    for (int i = 1; i <= n; i++)
        if (group[i]) l++;
        else r++;
    
    cout << l * r - (n - 1) << endl;
    return 0;
}

