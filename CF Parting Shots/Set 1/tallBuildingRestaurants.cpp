// ConneR and the A.R.C Markland-N: https://codeforces.com/problemset/problem/1293/A

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

int main(){
    int t; cin >> t;
    while (t--){
        int n, s, k; cin >> n >> s >> k;
        vector<int> v;
        for (int i = 0; i < k; i++){
            int a; cin >> a;
            v.pb(a);
        } 
        
        int x = 0;
        while (true){
            if (find(v.begin(), v.end(), s + x) == v.end() && (s + x) < n + 1){
                cout << x << endl;
                break;
            }
            
            if (find(v.begin(), v.end(), s - x) == v.end() && (s - x) > 0){
                cout << x << endl;
                break;
            }
            
            x++;
        }
    }
}

