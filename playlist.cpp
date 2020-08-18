// Playlist: https://cses.fi/problemset/task/1141/

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
 
int arr[200005];
 
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    map<int, int> m;
    int ans = 0, curLen = 0, i = 0, j = 0;
    while (j < n){
    	if (m.find(arr[j]) == m.end() || m[arr[j]] == 0){
    		m[arr[j]]++;
    		curLen++;
    		ans = max(ans, curLen);
    		j++;
    	}
    	else{
    		curLen--;
    		m[arr[i]]--;
    		i++;
    	}
    }
 
    cout << ans << endl;
    return 0;
}
