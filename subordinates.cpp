// Subordinates: https://cses.fi/problemset/task/1674/

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
 
vector<int> adj[200005];
int res[200005];
 
void dfs(int i){
	res[i] = 1;
	trav(child, adj[i]){
		dfs(child);
		res[i] += res[child];
	}
}
 
int main(){
    int n; cin >> n;
    for (int i = 2; i <= n; i++){
    	int a; cin >> a;
    	adj[a].pb(i);
    }
 
    dfs(1);
    for (int i = 1; i <= n; i++)
    	cout << res[i] - 1 << " ";
 
    return 0;
}
