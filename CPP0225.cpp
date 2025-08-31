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
		int a[n][n], hang[n]={0}, cot[n]={0};
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> a[i][j];
				hang[i] += a[i][j];
				cot[j] += a[i][j];
			}
		}
		int tongmax = max(*max_element(hang, hang+n), *max_element(cot, cot+n));
		int i=0, j=0, kq = 0;
		while(i < n && j < n){
			int tmp = min(tongmax-hang[i], tongmax-cot[j]);
			a[i][j] += tmp;
			hang[i] += tmp;
			cot[j] += tmp;
			kq += tmp;
			if(hang[i] == tongmax) i++;
			if(cot[j] == tongmax) j++;
		}
		cout << kq << endl;
	}
	return 0;
}