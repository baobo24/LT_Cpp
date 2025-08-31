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
	int n, i, j;
	cin >> n;
	int a[100][100];
	vector<int> v;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
	}
	sort(v.begin(), v.end());
	int dem = 0;
	int h1=0, h2 = n - 1, c1=0, c2 = n - 1;
	while(h1 <= h2){
		for(i=c1; i<=c2; i++){
			a[h1][i] = v[dem++];
		}
		h1++;
		for(i=h1; i<=h2; i++){
			a[i][c2] = v[dem++];
		}
		c2--;
		for(i=c2; i>=c1; i--){
			a[h2][i] = v[dem++];
		}
		h2--;
		for(i=h2; i>=h1; i--){
			a[i][c1] = v[dem++];
		}
		c1++;
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
