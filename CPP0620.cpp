#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

struct SinhVien{
    string ten, lop, msv, email;
};
bool cmp(SinhVien a, SinhVien b){
	if(a.lop == b.lop)
		return a.msv < b.msv;
	return a.lop < b.lop;
}
void sapxep(SinhVien a[], int n){
	sort(a, a+n, cmp);
}
void nhap(SinhVien a[], int n){   
	for(int i=0; i<n; i++){
		cin.ignore();
		getline(cin, a[i].msv);
		getline(cin, a[i].ten);
	    getline(cin, a[i].lop);  
		cin >> a[i].email;
	}
}
void in(SinhVien a){
	cout << a.msv << ' ' << a.ten << ' ' << a.lop << ' ';
	cout << a.email << endl;
}
int main(){
	struct SinhVien ds[1001];
    int n;
    cin >> n;
    nhap(ds, n);
    sapxep(ds, n);
	for(int i=0; i<n; i++){
		in(ds[i]);
	}
	return 0;
}
