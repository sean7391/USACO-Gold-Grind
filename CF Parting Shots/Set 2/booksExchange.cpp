// Books Exchange (hard version): https://codeforces.com/problemset/problem/1249/B2

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

void solve(){
    int n; cin >> n; int p[n];
    for (int i = 0; i < n; i++){
        cin >> p[i];
        p[i]--;
    }
    
    vector<int> visited(n), ans(n);
    for (int i = 0; i < n; i++){
        if (!visited[i]){
            vector<int> cur;
            while(!visited[i]){
                cur.pb(i);
                visited[i] = true;
                i = p[i];
            }
            
            trav(x, cur) ans[x] = sz(cur);
        }
    }
    
    for (int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
}

int main() {
    int q; cin >> q;
    while(q--) solve();
    return 0;
}

