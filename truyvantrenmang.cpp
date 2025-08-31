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
	int n, q;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	cin >> q;
	while(q--){
		int a, x;
		cin >> a >> x;
		if(a == 1){
			v.push_back(x);
		}
		else if(a == 2){
			auto it = std::find(v.begin(), v.end(), x);
			if (it != v.end()) v.erase(it);
		}
		else{
			auto it = std::find(v.begin(), v.end(), x);
			if (it != v.end()) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	
	return 0;
}
