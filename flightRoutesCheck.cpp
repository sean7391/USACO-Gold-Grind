// Flight Routes Check: https://cses.fi/problemset/task/1682/

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
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii; 
 
vector<int> adj[200005][2];
bool visited[200005];
int n, m;
 
void dfs(int v, int x){
	visited[v] = true;
	trav(next, adj[v][x])
		if (!visited[next])
			dfs(next, x);
}
 
int main() {
	cin >> n >> m;   
	for (int i = 0; i < m; i++){
		int a, b; cin >> a >> b;
		adj[a][0].pb(b);
		adj[b][1].pb(a);
	}
	
	dfs(1, 0);
	for (int i = 1; i <= n; i++){
		if (!visited[i]){
			cout << "NO" << endl;
			cout << 1 << " " << i << endl;
			return 0;
		}
	}
	memset(visited, false, sizeof(visited));
	
	dfs(1, 1);
	for (int i = 1; i <= n; i++){
		if (!visited[i]){
			cout << "NO" << endl;
			cout << i << " " << 1 << endl;
			return 0;
		}
	}
	
	cout << "YES" << endl;
	return 0;
}
