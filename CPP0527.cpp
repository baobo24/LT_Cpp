#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

struct thoigian{
    int gio, phut, giay;
};
bool cmp(thoigian a, thoigian b){
	if(a.gio != b.gio)
		return a.gio < b.gio;
	else if(a.phut != b.phut)
		return a.phut < b.phut;
	return a.giay < b.giay;
}

int main(){	
    int n;
    cin >> n;
    thoigian a[5000];
    for(int i=0; i<n; i++){
    	cin >> a[i].gio >> a[i].phut >> a[i].giay;
	}
    sort(a, a+n, cmp);
	for(int i=0; i<n; i++){
		cout <<a[i].gio << ' ' << a[i].phut << ' ' << a[i].giay << endl;
	}
	return 0;
}
