// Factory Machines: https://cses.fi/problemset/task/1620/

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

ll n, t;
ll times[2000000];

bool check(ll x){
    ll cnt = 0;
    for (ll i = 0; i < n; i++){
        cnt += x/times[i];
        if (cnt >= t)
            return true;
    }
    
    return false;
}

ll search(){
    ll left = 0, right = 1000000000000000000, ans = -1;
    while (left <= right){
        ll mid = (left + right)/2;
        if (!check(mid)){
            left = mid + 1;
            ans = mid;
        }
        else
            right = mid - 1;
    }
    
    return ans + 1;
}

int main() {
    cin >> n >> t;
    for (ll i = 0; i < n; i++) cin >> times[i];
    sort(times, times + n);
    cout << search() << endl;
    return 0;
}

