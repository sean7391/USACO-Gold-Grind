// Collecting Packages: https://codeforces.com/problemset/problem/1294/B

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++){
            int x, y; cin >> x >> y;
            v.pb(make_pair(x, y));
        }
        sort(v.begin(), v.end());
        bool flag = false;
        for (int i = 1; i < n; i++){
            if (v[i].second < v[i - 1].second){
                flag = true;
                break;
            }
        }
        
        if (flag){
            cout << "NO\n";
            continue;
        }
        else
            cout << "YES\n";
        
        pair<int, int> cur = make_pair(0, 0);
        for (int i = 0; i < n; i++){
            while((cur.first < v[i].first) || (cur.second < v[i].second)){
                if (cur.second < v[i].second && cur.first == v[i].first){
                    cur.second++;
                    cout << "U";
                }
                else{
                    cur.first++;
                    cout << "R";
                    continue;
                }
            }
        }
        
        cout << endl;
    }
}

