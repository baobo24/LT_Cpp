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
		int a[n], b[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<n; i++){
			cin >> b[i];
		}
		int kq = 0;
		for(int i=0; i<n; i++){
			int sum1 = 0, sum2 = 0;
			for(int j=i; j<n; j++){
				sum1 += a[j];
				sum2 += b[j];
				if(sum1 == sum2){
					kq = max(kq, j-i+1);
				}
			}
		}
		cout << kq << endl;
	}
	return 0;
}
