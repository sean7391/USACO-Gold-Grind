#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define f first
#define s second
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define trav(a, x) for (auto& a: x)
#define ins insert
#define pq priority_queue
#define all(v) v.begin(), v.end()
#define sz(x) (int)x.size()
#define endl "\n"
#define MAXN 150000

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii; 

const int dx[4]= {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};

vector<int> adj[MAXN];
bool visited[MAXN];
int edges = 0, nodes = 0;

void dfs(int x){
	visited[x] = true;
	nodes++;
	edges += sz(adj[x]);
	for (auto u : adj[x])
		if (!visited[u])
			dfs(u);
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
    	int a, b; cin >> a >> b;
    	adj[a].pb(b);
    	adj[b].pb(a);
    }
    
    bool bad = false;
    for (int i = 1; i <= n; i++){
    	edges = 0, nodes = 0;
    	if (!visited[i]){
    		dfs(i);
    		if (edges != (ll) nodes * (nodes - 1)){
    			bad = true;
    			break;
    		}
    	}
    }
    
    if (bad)
    	cout << "NO\n";
    else
    	cout << "YES\n";
    	
    return 0;
}

