// Shawarma Tent: https://codeforces.com/problemset/problem/1271/C

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define trav(a, x) for (auto& a: x)
#define ins insert
#define pq priority_queue
#define sz(x) (int)x.size()
#define rsz resize
#define endl "\n"

typedef long long ll;
typedef pair<int, int> pii; 

int n, sx, sy;
pii coord[4];
int cnt[4];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> sx >> sy;
    coord[0] = {sx + 1, sy};
    coord[1] = {sx - 1, sy};
    coord[2] = {sx, sy + 1};
    coord[3] = {sx, sy - 1};
    for (int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        for (int j = 0; j < 4; j++)
            if (min(a, sx) <= coord[j].f && max(a, sx) >= coord[j].f && min(b, sy) <= coord[j].s && max(b, sy) >= coord[j].s) cnt[j]++;
    }
    
    int maxX = 0, maxY = 0;
    int top = -1;
    for (int i = 0; i < 4; i++){
        if (cnt[i] > top){
            top = cnt[i];
            maxX = coord[i].f;
            maxY = coord[i].s;
        }             
    }
    
    cout << top << endl << maxX << " " << maxY << endl;
    return 0;
}

