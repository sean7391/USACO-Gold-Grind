// Forest Queries: https://cses.fi/problemset/task/1652/

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
 
int grid[1001][1001];
int dp[1001][1001];
 
int main() {
	int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++){
    	for (int j = 1; j <= n; j++){
    		char c; cin >> c;
    		if (c == '*')
    			grid[i][j] = 1;
    		else
    			grid[i][j] = 0;
    	}
    }
 
    for (int i = 1; i <= n; i++){
    	for (int j = 1; j <= n; j++){
    		dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + grid[i][j];
    	}
    }
 
    while(q--){
    	int a, A, b, B; cin >> a >> b >> A >> B;
    	int res = dp[A][B] - dp[a - 1][B] - dp[A][b - 1] + dp[a - 1][b - 1];
    	cout << res << endl;
    }
 
    return 0;
}
