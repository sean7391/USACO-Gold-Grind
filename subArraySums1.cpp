// Subarray Sums I: https://cses.fi/problemset/task/1660/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;


int main(){
    ll n, x, cnt = 0; cin >> n >> x; ll arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    ll left = 0, right = 0, sum = 0;
    for (right = 0; right < n; right++){
        sum += arr[right];
        while (sum > x && left < right){
            sum -= arr[left];
            left++;
        }
        
        if (sum == x)
            cnt++;
    }
    
    cout << cnt << endl;
}

