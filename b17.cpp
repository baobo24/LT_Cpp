#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

struct ideal{
	int ma;
	ll sh, in;
};

bool cmp(const ideal &a, const ideal &b){
	double A = a.sh*0.7 +a.in*0.3;
	double B = b.sh*0.7 +b.in*0.3;
	if(A == B) return a.ma < b.ma;
	return A>B;
};
int main(){
	int n;
	cin >> n;
	vector<ideal> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i].ma>>v[i].sh>>v[i].in;
	}
	sort(v.begin(), v.end(), cmp);
	vector<int> x;
	for(int i=0; i<min(7, n); i++){
		x.push_back(v[i].ma);
	}
	for(int i=0; i<x.size(); i++){
		cout << x[i] << ' ';
	}
	return 0;
}
