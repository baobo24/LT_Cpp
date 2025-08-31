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
	int m, s;
	cin >> m >> s;
	int max[m] = {0}, min[m] = {0};
	if( s > 9*m || (s == 0 && m > 1)){
		cout << -1 << ' ' << -1;
		return 0;
	}
	int tmp = s;
	for(int i=0; i<m; i++){
		if(s >= 9){
			max[i] = 9;
			s -= 9;
		}
		else if(s > 0){
			max[i] = s;
			break;
		}
	}
	tmp--;
	for(int i=m-1; i>=0; i--){
		if(tmp >= 9){
			min[i] = 9;
			tmp -= 9;
		}
		else if(tmp > 0){
			min[i] = tmp;
			break;
		}
	}
	min[0] += 1;
	for(int i=0; i<m; i++) cout << min[i];
	cout << ' ';
	for(int i=0; i<m; i++) cout << max[i];
	return 0;
}
