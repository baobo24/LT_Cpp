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
	ifstream in("DATA.in");
	int n, m;
	in >> n >> m;
	int a[n], b[m];
	map<int, int> mp;
	for(int i=0; i<n; i++){
		in >> a[i];
		mp[a[i]] = 1;
	}
	for(int i=0; i<m; i++){
		in >> b[i];
		if(mp[b[i]] == 1) mp[b[i]] = 2;
	}
	for(auto it : mp){
		if(it.second == 2)
			cout << it.first << ' '; 
	}
	return 0;
}
