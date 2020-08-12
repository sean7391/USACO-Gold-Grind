// Movie Festival II: https://cses.fi/problemset/task/1632/

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
 
int n, k;
vector<pii> v(200005);
 
int main() {
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i].s >> v[i].f;
    sort(v.begin(), v.end());
 
    int ans = 0;
	multiset<int> ms;
	for (int i = 0; i < n; i++){
		bool flag = false;
		if (!ms.empty()){
			auto it = ms.ub(v[i].s);
			if (it != ms.begin()){
				it--;
				if (*it <= v[i].s){
					ms.erase(it);
					ms.insert(v[i].f);
					flag = true;
					ans++;
				}
			}
		}
 
		if (!flag && sz(ms) < k){
			ms.insert(v[i].f);
			ans++;
		}
	}
 
    cout << ans << endl;
    return 0;
}
