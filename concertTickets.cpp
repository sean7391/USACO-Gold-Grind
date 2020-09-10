// Concert Tickets: https://cses.fi/problemset/task/1091

#include <bits/stdc++.h>
#define pb push_back

using namespace std;

typedef long long ll;
typedef vector<ll> vl;

int main() {
  ll n, m, t;
  cin >> n >> m;
  multiset<ll, greater<ll>> ms;
  
  while (n--) {
    cin >> t;
    ms.insert(t);
  }
  
  for (ll element : ms)
    cout << element << " ";
    
  cout << endl;
  
  while (m--) {
    cin >> t;
    auto it = ms.lower_bound(t);
    cout << *it << "\n";
    if (it == ms.end()) 
        cout << "-1\n";
    else {
      cout << *it << "\n";
      ms.erase(it);
    }
  }
  
}
