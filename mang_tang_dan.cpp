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
	int n, d;
	cin >> n >> d;
	ll a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	ll dem = 0;
	for(int i=0; i<n-1; i++){
		if(a[i] >= a[i+1]){
			int tmp = a[i] - a[i+1];
			a[i+1] += (tmp/d + 1) * d;
			dem += tmp/d + 1; 
		}
	}
	cout << dem;
	return 0;
}
