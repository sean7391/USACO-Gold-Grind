// Number Spiral: https://cses.fi/problemset/task/1071/

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
    int t; cin >> t;
    while (t--){
    	ll x, y; cin >> x >> y;
    	if (x == y)
    		cout << x * x - x + 1 << endl;
    	else if (x > y){
    		if (x % 2 == 0)
    			cout << x * x - y + 1 << endl;
    		else
    			cout << (x - 1) * (x - 1) + y << endl;
    	}
    	else{
    		if (y % 2 == 1)	
    			cout << y * y - x + 1 << endl;
    		else
    			cout << (y - 1) * (y - 1) + x << endl;
    	}
    }
    
    return 0;
}
