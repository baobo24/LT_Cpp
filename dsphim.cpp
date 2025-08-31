#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

map<string, string> mp;
int id = 1;
class theloai{
public:
	string ma, name;
	friend istream &operator >>(istream &in, theloai &a){
		a.ma = "TL";
		if(id<10) a.ma += "00"+to_string(id);
		else if(id<100) a.ma += "0"+to_string(id);
		else a.ma += to_string(id);
		getline(in, a.name);
		mp[a.ma] = a.name;
		++id;
		return in;
	}
};
int j=1;
int cv(string &s){
	int res=0;
	for(int i:s){
		res = res *10+ (i-'0');
	}
	return res;
}
class phim{
public:
	string ma, name, date, tap, tl, code;
	int ngay,thang,nam,sotap;
	friend istream &operator >>(istream &in, phim &a){
		a.code = "P";
		if(j<10) a.code += "00"+to_string(j);
		else if(j<100) a.code += "0"+to_string(j);
		else a.code += to_string(j);
		string s1, s2;
		getline(in, a.ma);
		a.tl = mp[a.ma];
		getline(in, a.date);
		getline(in, a.name);
		getline(in, a.tap);
		stringstream ss2(a.date);
		getline(ss2, s2, '/');
		a.ngay = cv(s2);
		getline(ss2, s2, '/');
		a.thang = cv(s2);
		getline(ss2, s2, '/');
		a.nam = cv(s2);
		a.sotap = cv(a.tap);
		++j;
		return in;
	}
	friend ostream &operator <<(ostream &out, phim &a){
		cout << a.code << ' ' << a.tl<<' '<< a.date<<' '<<a.name<<' '<<a.tap<<endl;
		return out;
	}
};
bool cmp(phim &a, phim &b){
	if(a.nam>b.nam) return 0;
	if(a.nam<b.nam) return 1;
	if(a.thang>b.thang) return 0;
	if(a.thang<b.thang) return 1;
	if(a.ngay>b.ngay) return 0;
	if(a.ngay<b.ngay) return 1;
	if(a.name>b.name) return 0;
	if(a.name<b.name) return 1;
	if(a.sotap>b.sotap) return 0;
	if(a.sotap<b.sotap) return 1;
	return 0;
}
void process(theloai mh[], int n, phim a[], int m){
	sort(a, a+m, cmp);
}
int main(){
	int n, m;
	cin >>n>>m;
	cin.ignore();
	theloai tl[100];
	phim p[1000];
	for(int i=0; i<n; i++) cin >>tl[i];
	for(int i=0; i<m; i++) cin >>p[i];
	process(tl, n,p,m);
	for(int i=0; i<m; i++) cout<<p[i];
	return 0;
}
