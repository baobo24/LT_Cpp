#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

struct human{
    string ten, ns, ngay, thang , nam;
};
bool cmp(human a, human b){
	if(a.nam != b.nam)
		return a.nam < b.nam;
	else if(a.thang != b.thang)
		return a.thang < b.thang;
	return a.ngay < b.ngay;
}

int main(){	
    int n;
    cin >> n;
    human a[101];
    for(int i=0; i<n; i++){
    	cin >> a[i].ten >> a[i].ns;
    	a[i].ngay = a[i].ns.substr(0, 2);
    	a[i].thang = a[i].ns.substr(3, 2);
    	a[i].nam = a[i].ns.substr(6, 4);
	}
    sort(a, a+n, cmp);
	cout << a[n-1].ten << endl;
	cout << a[0].ten;
	return 0;
}
