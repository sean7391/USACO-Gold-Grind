// Sum of Odd Integers: https://codeforces.com/contest/1327/problem/A

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

void solve(ll a, ll b){
	if (b * b <= a && a % 2 == b % 2) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	int t; cin >> t;
	while (t--){
		ll a, b; cin >> a >> b;
		solve(a, b);
	}
		
	return 0;
}

