#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool canbang(int a[], int n, int k){
	int sum1 = 0, sum2 = 0;
	foru(i, 0, k-1){
		sum1 += a[i];
	}
	foru(i, k+1, n-1){
		sum2 += a[i];
	}
	if(sum1 == sum2)
		return true;
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n]; 
		foru(i, 0, n-1){
			cin >> a[i];
		}
		bool check = false;
		foru(i, 0, n-1){
			if(canbang(a, n, i)){
				cout << i+1 << endl;
				check = true;
				break;
			}
		}
		if(!check)
			cout << -1 << endl;
	}
	return 0;
}
