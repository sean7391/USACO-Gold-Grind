// Maximum Subarray Sum: https://cses.fi/problemset/task/1643

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAXN 100005

#define ll long long

int main() {
    int n; cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    ll best = arr[0], current = arr[0];
    for (int i = 1; i < n; i++){
        current = max(arr[i], current + arr[i]);
        best = max(best, current);
    }
    
    cout << best << endl;
}

