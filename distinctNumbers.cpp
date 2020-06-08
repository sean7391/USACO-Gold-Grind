// Distinct Numbers: https://cses.fi/problemset/task/1621/

#include <iostream>
#include <fstream>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main(){
    unordered_set<int> s;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        s.insert(a);
    }
    
        
    cout << s.size();
}