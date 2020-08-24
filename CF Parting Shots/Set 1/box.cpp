// Box: https://codeforces.com/contest/1227/problem/B

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAXN 5005
 
int main(){
    int t, n; cin >> t;
    while(t--){
        cin >> n;
        int arr[n]; set<int> s; vector<int> v;
        for (int i = 0; i < n; i++) cin >> arr[i];
        int maxNum = arr[n - 1];
        for (int i = 1; i <= maxNum; i++)
            s.insert(i);
        
        if (maxNum < n){
            cout << "-1" << endl;
            continue;
        }
        
        bool notRight = false;
        for (int i = 0; i < n; i++){
            if (i > 0 && arr[i] == arr[i - 1]){
                int x = *s.upper_bound(0);
                if (x > arr[i]){
                    cout << -1 << endl;
                    notRight = true;
                    break;
                }
                v.pb(x);
                s.erase(x);
            }
            else{
                v.pb(arr[i]);
                s.erase(arr[i]);
            }
            
            if (notRight) break;
        }
        
        if (notRight) continue;
        
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
}
