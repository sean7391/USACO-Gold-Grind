#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAXN 100005

int main(){
    int n; cin >> n;
    vector<int> v;
    for (int i = 2; i <= sqrt(n); i++){
        while (n % i == 0){
            n /= i;
            v.pb(i);
        }
    }
    
    for (int i = 0; i < v.size(); i++){
        if (i == v.size() - 1)
            cout << v[i] << endl;
        else 
            cout << v[i] << "*";
    }
}

