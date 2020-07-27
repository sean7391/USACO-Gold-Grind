// Sum of Three Values: https://cses.fi/problemset/task/1641/

#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

struct type{
    ll value, index;
};

bool cmp(type a, type b){
    return a.value < b.value;
}
 
int main() {
    ll n, x; cin >> n >> x; type arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i].value;
        arr[i].index = i;
    }
    sort(arr, arr + n, cmp);
    
    for (ll i = 0; i < n - 2; i++){
        ll l = i + 1;
        ll r = n - 1;
        while (l < r){
            if (arr[i].value + arr[l].value + arr[r].value == x){
                cout << arr[i].index + 1 << " " << arr[l].index + 1 << " " << arr[r].index + 1 << endl;
                return 0;
            } else if (arr[i].value + arr[l].value + arr[r].value < x)
                l++;
            else
                r--;
        }
    }
    
    cout << "IMPOSSIBLE\n";
    return 0;
}
