// Bad Prices: https://codeforces.com/problemset/problem/1213/B

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n; int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        int cnt = 0;
        int min = arr[n - 1];
        for (int i = n - 2; i >= 0; i--){
            if (arr[i] > min)
                cnt++;
                
            if (arr[i] < min)
                min = arr[i];
        }
        
        cout << cnt << endl;
    }
}

