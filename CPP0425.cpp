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
        for(int i=0; i<n; i++){
        	cin >> a[i];        
		}
		sort(a, a+n);
		int i = 0, tmp;
		if(n%2 == 0)
			tmp = n/2;
		else
			tmp = n/2 + 1;
		while(tmp < n){
			cout << a[i] << ' ' << a[tmp] << ' ';
			i++; tmp++;
		}
		if(n%2 == 1) cout << a[i];
        cout << endl;
    }
	return 0;
}
