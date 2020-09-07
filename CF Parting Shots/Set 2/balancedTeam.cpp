// Balanced Team: https://codeforces.com/problemset/problem/1133/C

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

int main() {
    int n; cin >> n; int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int ans = 0, cur = 0;
    for (int i = 0; i < n; i++){
        if (cur < i) cur = i;
        int num = cur - i;
        while(arr[cur] - arr[i] <= 5 && cur < n){
            num++;
            cur++;
        }
        
        ans = max(ans, num);
    }
    
    cout << ans << endl;
    return 0;
}

