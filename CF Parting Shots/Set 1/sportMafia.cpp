// Sport Mafia: https://codeforces.com/problemset/problem/1195/B

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int sum = -1, subtract = n, add = 0, toAdd = 1;
    while (true){
        if (sum == k) break;
        add += toAdd;
        subtract--;
        sum = add - subtract;
        toAdd++;
    }
    cout << subtract << endl;
    return 0;
}

