// Building Roads: https://cses.fi/problemset/result/811962/

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

const int dx[4]= {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};

void setIO(string name){
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((name + ".in").c_str(), "r", stdin);
	freopen((name + ".out").c_str(), "w", stdout);
}

int n, m;
vector<int> adj[100005];
bool visited[100005];
int last = -1;

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    
    vector<pii> answers;
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            if (i != 1){
                answers.pb(mp(last, i));
                cnt++;
            }
            dfs(i);
        }
    }
    
    cout << cnt << endl;
    for (int i = 0; i < sz(answers); i++)
        cout << answers[i].f << " " << answers[i].s << endl;
        
    return 0;
}

