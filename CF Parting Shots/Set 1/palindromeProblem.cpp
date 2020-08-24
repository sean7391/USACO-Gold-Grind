// Yet Another Palindrome Problem: https://codeforces.com/problemset/problem/1324/B

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
#define beg(x) x.begin()
#define en(x) x.end()
#define all(x) beg(x), en(x)
#define endl "\n"

typedef long long ll;
typedef pair<int, int> pii; 

void solve(){
	int n; cin >> n; int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	
	for (int i = 0; i < n - 2; i++){
		for (int j = i + 2; j < n; j++){
			if (arr[i] == arr[j]){
				cout << "YES\n";
				return;
			}
		}
	}
	
	cout << "NO\n";
}

int main() {
	int t; cin >> t;
	while (t--){
		solve();
	}
		
	return 0;
}

