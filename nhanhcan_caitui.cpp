#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int a[100], c[100];
int XOPT[100], X[100];
int n, B, FOPT;
int s = 0, b;

void update_kyluc(){
	if(s > FOPT){
		FOPT = s;
		for(int i=1; i<=n; i++)
			XOPT[i] = X[i];
	}
}
void Branch_And_Bound(int i){
	for(int j = 1; j >= 0; j--){
		X[i] = j;
		s = s + c[i]*X[i];
		b = b - a[i]*X[i];
		if(b >= 0){
			if(i == n) update_kyluc();
			else if(s + (c[i+1]*b)/a[i+1] > FOPT)
				Branch_And_Bound(i+1);
		}
		s = s - c[i]*X[i];
		b = b + a[i]*X[i];
	}
}
bool cmp(pair<int, int> a, pair<int, int> b) {
    return ((double)a.second / a.first) > ((double)b.second / b.first);
}

int main(){
	cin >> n >> B;
	b = B;
	FOPT = INT_MIN;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	for(int i=1; i<=n; i++){
		cin >> c[i];
	}
	vector<pair<int, int>> ac;
    for (int i = 1; i <= n; i++) {
        ac.push_back(make_pair(a[i], c[i]));
    }
    sort(ac.begin(), ac.end(), cmp);
	for (int i = 0; i < ac.size(); i++) {
        a[i+1] = ac[i].first;
        c[i+1] = ac[i].second;
    }
	Branch_And_Bound(1);
	cout << FOPT << endl;
//	for(int i=1; i<=n; i++){
//		cout << XOPT[i] << ' ';
//	}
	return 0;
}