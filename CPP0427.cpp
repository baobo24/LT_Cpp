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
		vector<int> v;
		foru(i, 0, n-1){
			cin >> a[i];
		}
		for(int i=0; i<n-1; i++){
			if(a[i] != 0 && a[i] == a[i+1]){
				a[i] *= 2;
				a[i+1] = 0;
			}
		}
		for(int i=0; i<n; i++){
			if(a[i] == 0)
				v.push_back(a[i]);
		}
		foru(i, 0, n-1){
			if(a[i] != 0)
				cout << a[i] << ' ';
		}
		for(int x : v){
			cout << x << ' ';
		}
		cout << endl;
	}
	return 0;
}
