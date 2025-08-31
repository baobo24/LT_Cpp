#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

//int n, a[20];
//bool check;
//
//void khoitao(){
//	for(int i=1; i<=n; i++){
//		a[i] = i;
//	}
//}
//void sinh(){
//	int i = n-1;
//	while(i >= 1 && a[i] > a[i+1]){
//		i--;
//	}
//	if(i == 0){
//		check = false;
//	}
//	else{
//		int j = n;
//		while(a[i] > a[j])
//			j--;
//		swap(a[i], a[j]);
//		reverse(a+i+1, a+n+1);
//	}
//}
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		cin >> n;
//		khoitao();
//		check = true;
//		while(check){
//			for(int i=1; i<=n; i++){
//				cout << a[i];
//			}
//			cout << ' ';
//			sinh();
//		}
//		cout << endl;
//	}
//	return 0;
//}

int n;
bool unused[100];
int X[100];

void Try(int i){
	for (int j=1; j<=n; j++){
		if (unused[j]) {
			X[i] = j;
			unused[j] = false;
			if ( i ==n){
				for(int k=1; k<=n; k++)
					cout << X[k];
				cout << endl;
			}
			else
				Try (i+1);
			unused[j] = true;
		}
	}
}

int main() {
	cin >> n;
    for(int i = 1; i <= n; i++) unused[i] = true;
    Try(1);
	return 0;
}
		                 