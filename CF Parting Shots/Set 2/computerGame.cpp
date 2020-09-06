// Computer Game: https://codeforces.com/problemset/problem/1183/C

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
#define rsz resize
#define beg(x) x.begin()
#define en(x) x.end()
#define all(x) beg(x), en(x)
#define endl "\n"

typedef long long ll;
typedef pair<int, int> pii; 

const int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};

ll k, n, a, b;

bool check(ll x){
    ll rem = k - (x * a);
    if (rem < 1 || (rem <= b && x < n)) return false;
    if (x + (rem - b - 1)/b + 1 >= n) return true;
    return false;
}

ll search(){
    ll left = 0, right = n, ans = 0;
    while (left <= right){
        ll mid = (left + right)/2;
        if (check(mid)){
            left = mid + 1;
            ans = mid;
        }
        else
            right = mid - 1;
    }
    
    return ans;
}

void solve(){
    cin >> k >> n >> a >> b;
    if (b * n >= k){
        cout << -1 << endl;
        return;
    }
    cout << search() << endl;
}

int main() {
    ll q; cin >> q;
    while (q--) solve();
    return 0;
}

