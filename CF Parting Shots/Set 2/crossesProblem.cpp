// Yet Another Crosses Problem: https://codeforces.com/problemset/problem/1194/B

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
    int n, m; cin >> n >> m;
    int rows[n], cols[m], int arr[n][m];
    memset(rows, 0, sizeof(rows)); memset(cols, 0, sizeof(cols));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            char c; cin >> c;
            if (c == '*') arr[i][j] = 1;
            else{
                arr[i][j] = 0;
                rows[i]++;
                cols[j]++;
            }
        }
    }
    
    int ans = INT_MAX;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int num = rows[i] + cols[j];
            if (arr[i][j] == 0) num--;
            ans = min(ans, num);
        }
    }
    
    cout << ans << endl;
}

int main() {
    int q; cin >> q;
    while(q--) solve();
}

