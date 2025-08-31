#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

struct NhanVien{
    string ten, gt, ns, dc, ms, ngayhd, ma;
};
bool cmp(NhanVien a, NhanVien b){
	string y1 = a.ns.substr(6,4);
	string y2 = b.ns.substr(6,4);
	string m1 = a.ns.substr(0,2);
	string m2 = b.ns.substr(0,2);
	string d1 = a.ns.substr(3,2);
	string d2 = b.ns.substr(3,2);
	if(y1 != y2)
		return y1 < y2;
	else if(m1 != m2)
		return m1 < m2;
	return d1 < d2;
}
void sapxep(NhanVien a[], int n){
    sort(a, a+n, cmp);
}

bool check = false;
int dem = 0;
void nhap(NhanVien &a){
	if(!check)
		cin.ignore();
	check = true;
	dem++;
	a.ma = "";
	a.ma += to_string(dem);
	while(a.ma.size()<5){
		a.ma = '0' + a.ma;
	}
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
	getline(cin, a.dc);
	getline(cin, a.ms);
	getline(cin, a.ngayhd);
}
void inds(NhanVien a[], int n){
	
	for(int i = 0; i < n; i++){
		cout << a[i].ma << ' ' << a[i].ten << ' ' << a[i].gt << ' ' << a[i].ns << ' ' << a[i].dc << ' ' << a[i].ms << ' ' << a[i].ngayhd << endl;
	}
}
		
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}