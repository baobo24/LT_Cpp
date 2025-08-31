#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int snt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return 0;
	}
	return n>1;	
}
int b[400];
void check(){
	int i=0, dem=0;
	while(dem <= 400){
		if(snt(i)){
			b[dem] = i;
			dem++;
		}
		i++;			
	}
}
int main(){
	check();
	int t;
	cin >> t;
	for(int k=1; k<=t; k++){
		int n, i, j;
		cin >> n;
		int a[20][20];
		int h1=0, h2 = n - 1, c1=0, c2 = n - 1;
		int dem=0;
		while(dem < n*n){
			for(i=c1; i<=c2; i++){
				a[h1][i] = b[dem++];
			}
			h1++;
			for(i=h1; i<=h2; i++){
				a[i][c2] = b[dem++];
			}
			c2--;
			for(i=c2; i>=c1; i--){
				a[h2][i] = b[dem++];
			}
			h2--;
			for(i=h2; i>=h1; i--){
				a[i][c1] = b[dem++];
			}
			c1++;
		}
		cout << "Test " << k << ":\n";
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				cout << a[i][j] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}
