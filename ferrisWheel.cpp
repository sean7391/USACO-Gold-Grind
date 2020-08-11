// CSES Ferris Wheel: https://cses.fi/problemset/task/1090/

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
    int n, x; cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    	cin >> a[i];
 
    sort(a, a + n);
    int cnt = 0;
 
	int j = n - 1, i = 0;
	while (i <= j){
		if (i == j){
			cnt++;
			break;
		}
		if (a[j] + a[i] > x){
			cnt++;
			j--;
		}
		else{
			cnt++;
			i++;
			j--;
		}
	}
 
    cout << cnt << endl;
    return 0;
}
