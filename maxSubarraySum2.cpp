
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;


int main(){
    ll n; cin >> n;
    ll dp[n + 1], smallest[n + 1], arr[n + 1]; arr[0] = 0; dp[0] = 0; smallest[0] = 0;
    for (ll i = 1; i < n + 1; i++)
        cin >> arr[i];
    
    for (ll i = 1; i < n + 1; i++){
        dp[i] = dp[i - 1] + arr[i];
        smallest[i] = min(smallest[i - 1], dp[i]);
    }
    
    ll max = arr[1];
    for (ll i = n; i >= 1; i--)
        if (dp[i] - smallest[i - 1] > max)
            max = dp[i] - smallest[i - 1];
    
    cout << max << endl;
}

