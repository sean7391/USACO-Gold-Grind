// Range Sum Queries I: https://cses.fi/problemset/task/1646

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
 
const int dx[4]= {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
 
void setIO(string name){
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((name + ".in").c_str(), "r", stdin);
	freopen((name + ".out").c_str(), "w", stdout);
}
 
ll dp[200005];
 
int main() {
    // setIO("name"); 
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++){
    	int a; cin >> a;
    	dp[i] = dp[i - 1] + a;
    }
 
    while (q--){
    	int a, b; cin >> a >> b;
    	cout << dp[b] - dp[a - 1] << endl;
    }
 
    return 0;
}
