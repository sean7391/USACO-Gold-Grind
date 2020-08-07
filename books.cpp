// Books: https://codeforces.com/problemset/problem/279/B

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

int arr[100005];
int dp[100005];

int main() {
    int n, t; cin >> n >> t;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i <= n; i++)
    	dp[i] = dp[i - 1] + arr[i];
    
    int ans = 0;	
    int j = n;
    for (int i = 0; i < n; i++){
    	if (dp[j] - dp[i] < t){
    	    while (dp[j] - dp[i] < t && j < n){
    	        j++;
    	    }
    	}
    	if (dp[j] - dp[i] > t){
    	    while (dp[j] - dp[i] > t)
    		    j--;
    	}
    	
    	ans = max(ans, j - i);
    }
    
    cout << ans << endl;
    return 0;
}

