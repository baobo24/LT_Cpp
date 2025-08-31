#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int n, a[20];
bool check;
void khoitao(){
	for(int i=1; i<=n; i++){
		a[i] = 0;
	}
}
void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		i--;
	}
	if(i == 0){
		check = false;
	}
	else{
		a[i] = 1;
		for(int j=i+1; j<=n; j++){
			a[j] = 0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		khoitao();
		check = true;
		while(check){
			for(int i=1; i<=n; i++){
				cout << a[i];
			}
			cout << ' ';
			sinh();
		}
		cout << endl;
	}
	return 0;
}
