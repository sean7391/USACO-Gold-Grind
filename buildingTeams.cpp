// Building Teams (Bipartiteness): https://cses.fi/problemset/task/1668/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define endl "\n"

const int MN = 1e5 + 10;

int N, M;
bool bad, visited[MN], group[MN];
vector<int> a[MN];

void dfs(int n = 1, bool g = 0){
    visited[n] = true;
    group[n] = g;
    for(int u : a[n]){ 
        if(visited[u]){
            if(group[u] == g)
                bad = true;
        }
        else
            dfs(u, !g);
    }
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++){
        int u, v; cin >> u >> v;
        a[u].pb(v);
        a[v].pb(u);
    }
    
    for (int i = 1; i <= N; i++){
        if (bad) break;
        if (!visited[i])
            dfs(i);
    }
    
    if (bad)
        cout << "IMPOSSIBLE" << endl;
    else
        for (int i = 1; i <= N; i++)
            cout << group[i] + 1 << " ";
            
    cout << endl;
    return 0;
}

