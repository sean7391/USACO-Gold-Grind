// Distinct Numbers: https://cses.fi/problemset/task/1621/

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
 
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    	cin >> v[i];
 
    sort(begin(v), end(v));
    int ans = 1;
    for (int i = 1; i < n; i++)
    	if (v[i] != v[i - 1])
    	    ans++;
 
    cout << ans << endl;
    return 0;
}
