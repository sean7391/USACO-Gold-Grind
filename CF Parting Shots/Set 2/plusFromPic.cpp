// Plus from Picture: https://codeforces.com/contest/1182/problem/B

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define f first
#define s second
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define trav(a, x) for (auto& a: x)
#define ins insert
#define pq priority_queue
#define sz(x) (int)x.size()
#define rsz resize
#define beg(x) x.begin()
#define en(x) x.end()
#define all(x) beg(x), en(x)
#define endl "\n"

typedef long long ll;
typedef pair<int, int> pii; 

const int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};

int h, w;
char arr[1000][1000];
bool visited[1000][1000];

void dfs(int x, int y){
    visited[x][y] = true;
    int i = x + 1, j = y;
    while (arr[i][j] == '*' && !visited[i][j] && i < h){
        visited[i][j] = true;
        i++;
    }
    i = x - 1; j = y;
    while (arr[i][j] == '*' && !visited[i][j] && i >= 0){
        visited[i][j] = true;
        i--;
    }
    i = x; j = y + 1;
    while (arr[i][j] == '*' && !visited[i][j] && j < w){
        visited[i][j] = true;
        j++;
    }
    i = x; j = y - 1;
    while (arr[i][j] == '*' && !visited[i][j] && j >= 0){
        visited[i][j] = true;
        j--;
    }
}

int main() {
    cin >> h >> w;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            cin >> arr[i][j];
            
    bool found = false;
    for (int i = 1; i < h - 1; i++){
        for (int j = 1; j < w - 1; j++){
            if (arr[i][j] == '*' && arr[i - 1][j] == '*' && arr[i + 1][j] == '*' && arr[i][j - 1] == '*' && arr[i][j + 1] == '*'){
                found = true;
                dfs(i, j);
                break;
            }
        }
        
        if (found){
            for (int j = 0; j < h; j++){
                for (int k = 0; k < w; k++){
                    if (arr[j][k] == '*' && !visited[j][k]){
                        cout << "NO" << endl;
                        return 0;
                    }
                }
            }
            
            cout << "YES" << endl;
            return 0;
        }
    }
        
    cout << "NO" << endl;
    return 0;
}

