// Towers: https://cses.fi/problemset/task/1073/

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
 
int main() {
    // setIO("name"); 
    int n; cin >> n;
    int cnt = n;
    multiset<int> ms;
    for (int i = 0; i < n; i++){
    	int a; cin >> a;
    	if (ms.ub(a) != ms.end()){
    		int x = *ms.ub(a);
    		cnt--;
    		ms.erase(ms.find(x));
			ms.insert(a);
    	}
    	else
    		ms.insert(a);
    }
 
    cout << cnt << endl;
    return 0;
}
