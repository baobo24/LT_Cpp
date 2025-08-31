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
    string ten, gt, ns, dc, ms, ngayhd;
};
bool check = false;
void nhap(NhanVien &a){
	if(!check)
		cin.ignore();
	check = true;
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
	getline(cin, a.dc);
	getline(cin, a.ms);
	getline(cin, a.ngayhd);
}
void inds(NhanVien a[], int n){
	
	for(int i = 0; i < n; i++){
		string ma = to_string(i+1);
		while(ma.size() < 5){
			ma = '0' + ma;
		}
		cout << ma << ' ' << a[i].ten << ' ' << a[i].gt << ' ' << a[i].ns << ' ' << a[i].dc << ' ' << a[i].ms << ' ' << a[i].ngayhd << endl;
	}
}
		
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}