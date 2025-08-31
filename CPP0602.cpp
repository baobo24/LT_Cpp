#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

void inthuong(string &s){
	for(int i=0; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
}
class SinhVien{
	private:
		string ten, lop, ns;
		double gpa;
	public:
		SinhVien();
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
};
SinhVien::SinhVien(){
}
istream& operator >> (istream &in, SinhVien &a){
	getline(in, a.ten );
    getline(in, a.lop);
    getline(in, a.ns);
	in >> a.gpa;
	return in;
}
ostream& operator << (ostream &out, SinhVien a){
	if(a.ns[1] == '/')
		a.ns = '0' + a.ns;
	if(a.ns[4] == '/')
		a.ns.insert(3, "0");
	inthuong(a.ten);
	stringstream ss(a.ten);
	string tmp, res = "";
	while(ss >> tmp){
		tmp[0] = toupper(tmp[0]);
		res += tmp + ' ';
	}
	res.pop_back();
	cout << "B20DCCN001 " << res << ' ' << a.lop << ' ' << a.ns << ' ';
	cout << fixed << setprecision(2) << a.gpa;
	return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
