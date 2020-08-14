// Subarray Sums 2: https://cses.fi/problemset/task/1661/

#include <bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
#define ins insert
#define endl "\n"
 
typedef long long ll;
 
ll arr[200005];
ll dp[200005];
multiset<ll> ms;
map<ll, ll> mp;
 
int main() {
    ll n, x; cin >> n >> x;
    ms.insert(0);
    mp[0] = 1;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i <= n; i++) {
    	dp[i] = dp[i - 1] + arr[i];
    	ms.ins(dp[i]);
    	mp[dp[i]]++;
    }
 
 
    ll ans = 0;
    for (int i = n; i >= 1; i--){
    	ms.erase(ms.find(dp[i]));
    	mp[dp[i]]--;
    	if (ms.find(dp[i] - x) != ms.end())
    		ans += mp[dp[i] - x];
    }
 
    cout << ans << endl;
    return 0;
}
