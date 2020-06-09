// Sorted Adjacent Differences: https://codeforces.com/problemset/problem/1339/B

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
typedef long long ll;
typedef vector<int> vi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vi v;
    
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        for (int k = 0; k < n; k++){
            int a; cin >> a;
            v.pb(a);
        }
        
        sort(v.begin(), v.end());
            
        int i = n/2, step = -1;
        cout << v[i] << " ";
        
        while(abs(step) < n){
            i += step;
            cout << v[i] << " ";
            if (step < 0) step--;
            else step++;
            step *= -1;
        }
        
        cout << "\n";
        v.clear();
    }
}