// Sum of Two Values: https://cses.fi/problemset/task/1640/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAXN 100005

struct type {
    int value, index;
};

bool cmp(type a, type b){
    return a.value < b.value;
}

int main() {
    int n, x; cin >> n >> x;
    type arr[n];
    
    for (int i = 0; i < n; i++){
        cin >> arr[i].value;
        arr[i].index = i;
    }
    sort(arr, arr + n, cmp);
    
    int left = 0, right = n - 1;
    while (left < right){
        if (arr[left].value + arr[right].value == x){
            cout << arr[left].index + 1 << " " << arr[right].index + 1 << endl;
            return 0;
        }
        else if (arr[left].value + arr[right].value < x)
            left++;
        else 
            right--;
    }
    
    cout << "IMPOSSIBLE" << endl;
    return 0;
}

