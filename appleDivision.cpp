// Apple Division: https://cses.fi/problemset/task/1623/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAXN 100005

#define ll long long

ll smallest = INT_MAX;

int main() {
    ll n, sum = 0; cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    
    for (ll i = 0; i < (1 << n); i++){
        ll newSum = 0;
        for (ll j = 0; j < n; j++)
            if ((i & (1 << j)) > 0)
                newSum += arr[j];
            
        ll diff = abs((sum - newSum) - newSum);
        smallest = min(smallest, diff);
    }
    
    cout << smallest << endl;
}

