#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int n, a[1005];
bool check;

void sinhphiatruoc(){
	int i = n-1;
	while(i >= 1 && a[i] < a[i+1]){
		i--;
	}
	if(i == 0){
		check = false;
	}
	else{
		int j = n;
		swap(a[i], a[j]);
		reverse(a+i+1, a+n+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		check = true;
		sinhphiatruoc();
		if(check){
			for(int i=1; i<=n; i++){
				cout << a[i] << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}
