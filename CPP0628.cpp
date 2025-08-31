#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

struct doanhnghiep{
    string ten, ma;
	int sv;
};
bool cmp(doanhnghiep a, doanhnghiep b){
	if(a.sv == b.sv)
		return a.ma < b.ma;
	return a.sv > b.sv;
}

void nhap(doanhnghiep &a){   
	cin.ignore();
	getline(cin, a.ma);
	getline(cin, a.ten); 
	cin >> a.sv ;
}
void in(doanhnghiep a[], int n){
	for(int i=0; i<n; i++){
		cout << a[i].ma << ' ' << a[i].ten << ' ' << a[i].sv << endl;
	}
}
int main(){
    int n;
    cin >> n;
    struct doanhnghiep a[n];
    for(int i = 0; i < n; i++) {
    	nhap(a[i]);
	}
	sort(a, a+n, cmp);
    in(a,n);
    return 0;
}
