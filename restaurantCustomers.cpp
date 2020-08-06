// Restaurant Customers: https://cses.fi/problemset/result/811889/

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

int main() {
    int n; cin >> n;
    vector<pair<int, bool>> arr;
    for (int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        arr.pb(mp(x, true));
        arr.pb(mp(y, false));
    }
    sort(arr.begin(), arr.end());
    int ans = 0, cur = 0;
    for (int i = 0; i < sz(arr); i++){
        if (arr[i].second)
            cur++;
        else
            cur--;
            
        ans = max(ans, cur);
    }
    
    cout << ans << endl;
    return 0;
}

