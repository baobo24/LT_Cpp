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
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		vector<pair<int, int>> v;
		for(int i=0; i<n; i++){
			cin >> a[i];
			v.push_back(make_pair(a[i], i));
		}
//		sort(v.begin(), v.end(), greater<pair<int, int>>());
		int sum = INT_MIN, kq = INT_MIN;
		int tmp = v[0].second;
		for(auto x : v){
			if(x.second != tmp-1 && x.second != tmp+1){
				tmp = x.second;
				sum = max(x.first, sum + x.first);
				kq = max(kq, sum);
			}			
		}
		cout << kq << endl;
	}
	return 0;
}
