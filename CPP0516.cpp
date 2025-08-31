#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

struct hang{
    string ten, nhom;
	double giamua, giaban, lai;
	int ma;
};
bool cmp(hang a, hang b){
	return a.lai > b.lai;
}
void nhap(hang a[], int n){
    for(int i=0; i<n; i++){
    	cin.ignore();
    	a[i].ma = i+1;
		getline(cin, a[i].ten);
	    getline(cin, a[i].nhom);
	    cin >> a[i].giamua;
		cin >> a[i].giaban;
		a[i].lai = a[i].giaban - a[i].giamua;
	}
}
void in(hang a[], int n){
	for(int i=0; i<n; i++){		
		cout << a[i].ma << ' ' << a[i].ten << ' ' << a[i].nhom << ' ';
		cout << fixed << setprecision(2) << a[i].lai << endl;
	}
}
int main(){
    struct hang ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sort(ds, ds+N, cmp);
    in(ds, N);
    return 0;
}
