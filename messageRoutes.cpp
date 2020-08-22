// Message Route: https://cses.fi/problemset/task/1667/

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
#define sz(x) (int)x.size()
#define beg(x) x.begin()
#define en(x) x.end()
#define all(x) beg(x), en(x)
#define endl "\n"

typedef long long ll;
typedef pair<int, int> pii; 

int N, M, p[100005], u;
vector<int> adj[100005];
queue<int> q;

int main(){
    cin >> N >> M;
    for (int i = 0; i < M; i++){
    	int a, b; cin >> a >> b; 
    	adj[a].pb(b); adj[b].pb(a);
    }
    
    q.push(1);
    p[1] = -1;
    while (!q.empty()){
    	u = q.front(); q.pop();
    	if (u == N) break;
    	trav(v, adj[u]){
    		if (!p[v]){
    			p[v] = u;
    			q.push(v);
    		}
    	}
    }
    
    if (!p[N]){
    	cout << "IMPOSSIBLE\n";
    	return 0;
    }
    
    vector<int> ans;
    for (int v = N; v != -1; v = p[v]) ans.pb(v);
    
    cout << sz(ans) << endl;
    for (int i = sz(ans) - 1; i >= 0; i--) cout << ans[i] << " ";
    
    cout << endl;
    return 0;
}

