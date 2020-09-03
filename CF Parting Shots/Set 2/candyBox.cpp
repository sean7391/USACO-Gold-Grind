// Candy Box (easy version): https://codeforces.com/contest/1183/problem/D

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
    int n; cin >> n; int arr[n + 1];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        arr[a]++;
    }
    sort(arr, arr + n + 1, greater<int>());
    int ans = 0, last = 200005;
    for (int i = 0; i <= n; i++){
        if (arr[i] < last){
            ans += arr[i];
            last = arr[i];
        }
        else if (arr[i] >= last){
            ans += last - 1;
            last--;
        }
        
        if (last == 0) break;
    }
    
    cout << ans << endl;
}

int main() {
    int q; cin >> q;
    while (q--) solve();
    return 0;
}

