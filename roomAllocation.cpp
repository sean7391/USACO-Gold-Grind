// Room Allocation: https://cses.fi/problemset/task/1164/ 

#include <bits/stdc++.h>
#define pb push_back
#define pii pair<int, int>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, x, y, max = 0, occupied = 0, in_out; cin >> n;
	int ans[n + 1];
	vector<int> rooms;
	vector<pair<int, pii>> v;
	
	
	for (int i = 1; i <= n; i++){
		cin >> x >> y;
		v.pb({x, {-1, i}}); 
		v.pb({y, {1, i}});  
	} 
	sort(v.begin(), v.end());

	for (auto element : v){
		in_out = element.second.first;
		int i = element.second.second;

		if (in_out == 1)
			rooms.pb(ans[i]);
		else if (occupied == rooms.size()){
		    max++;
			ans[i] = max;
		}
		else{
			ans[i] = rooms[occupied];
			occupied++;
		}
	}
	
	cout << max << "\n";
	for (int i = 1; i <= n; i++)
		cout << ans[i] << " ";
		
	return 0;
}
