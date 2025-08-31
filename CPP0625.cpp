#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

struct giangvien{
    string hoten, ten, ma, monhoc, nganh;
};
bool cmp(giangvien a, giangvien b){
	if(a.ten != b.ten)
		return a.ten < b.ten;
	return a.ma < b.ma;
}

int dem = 1;
void nhap(giangvien a[], int n){   
	for(int i=0; i<n; i++){		
		a[i].ma = "GV" + string(2-to_string(dem).size(), '0') + to_string(dem);
		dem++;
		getline(cin, a[i].hoten);
		getline(cin, a[i].monhoc);
		a[i].ten = "";
		for(int j=a[i].hoten.size()-1; j>=0; j--){
			if(a[i].hoten[j] == ' ') break;
			a[i].ten = a[i].hoten[j] + a[i].ten;
		}
		a[i].nganh = "";
		stringstream ss(a[i].monhoc);
		string tmp;
		while(ss >> tmp){
			a[i].nganh += toupper(tmp[0]);
		}   
	}
}
void in(giangvien a){
	cout << a.ma << ' ' << a.hoten << ' ' << a.nganh << endl;
}
int main(){
	struct giangvien a[50];
    int n;
    cin >> n;
    cin.ignore();
    nhap(a, n);
    sort(a, a+n, cmp);
	for(int i=0; i<n; i++){
		in(a[i]);
	}
	return 0;
}
