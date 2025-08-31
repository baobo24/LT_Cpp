#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

bool snt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return false;
	}
	return n>1;
}

int tongcs(int n){
	int sum = 0;
	while(n > 0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
bool check(int n){
	int sum = 0;
	int tmp = n;
	for(int i=2; i<=sqrt(n); i++){
		while(n%i == 0){
			sum += tongcs(i);
			n /= i;
		}
	}
	if(n > 1)
		sum += tongcs(n);
	if(sum == tongcs(tmp))
		return true;
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(!snt(n) && check(n))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
