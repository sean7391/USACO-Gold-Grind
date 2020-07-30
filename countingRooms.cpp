// Counting Rooms (Floodfill): https://cses.fi/problemset/result/778153/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define trav(a,x) for (auto& a: x)
#define ins insert
#define pq priority_queue
#define endl "\n"
#define MAXN 1005

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> ii; 

int grid[MAXN][MAXN];
int n, m;
bool visited[MAXN][MAXN];
int curSize = 0;
int cnt = 0;

void floodfill(int r, int c, int color){
    if (r < 0 || r >= n || c < 0 || c >= m) return;
    if (grid[r][c] != color) return;
    if (visited[r][c]) return;
    visited[r][c] = true;
    curSize++;
    
    floodfill(r, c + 1, color);
    floodfill(r, c - 1, color);
    floodfill(r - 1, c, color);
    floodfill(r + 1, c, color);
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            char c; cin >> c;
            if (c == '.') grid[i][j] = 0;
            else grid[i][j] = 1;
        }
            
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (!visited[i][j] && grid[i][j] == 0){
                curSize = 0;
                floodfill(i, j, grid[i][j]);
                cnt++;
            }
        }
    }
    
    cout << cnt << endl;
}

