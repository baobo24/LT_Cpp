#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	map<int, int> mp;
	for(int i=0; i<n; i++){
		mp[v[i]]++;
	}
	int maxx = 0, se=0;
	for(auto it : mp){
		maxx = max(maxx, it.second);
		if(it.second != maxx){
			
		}
	}
	for(auto it : mp){
		if(it.second != maxx){
			se = max(se, it.second);
		}
	}
	if(se == 0){
		cout <<"NONE";
		return 0;
	}
	for(auto it : mp){
		if(it.second == se){
			cout << it.first;
			break;
		}
	}
	return 0;
}
