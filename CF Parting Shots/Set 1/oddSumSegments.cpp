// Odd Sum Segments: https://codeforces.com/problemset/problem/1196/B

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

int main(){
    int q; cin >> q;
    while (q--){
        int n, k, cnt = 0; cin >> n >> k; int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            if (arr[i] % 2 != 0) cnt++;
        }
        if (cnt < k){
            cout << "NO\n";
            continue;
        }
        if (cnt % 2 != k % 2){
            cout << "NO\n";
            continue;
        }
        
        cout << "YES\n";
        int sum = 0;
        int num = 1;
        for (int i = 0; i < n; i++){
            if (num == k){
                cout << n << endl;
                break;
            }
            sum += arr[i];
            if (sum % 2 != 0){
                cout << i + 1 << " ";
                sum = 0;
                num++;
            }
        }
    }
}

