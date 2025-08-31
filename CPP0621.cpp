#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

class SinhVien{
	private:
		string ten, lop, email, msv;
	public:
		SinhVien(){}
		bool operator < (SinhVien a){
			return this->msv < a.msv;
		}
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
};
//SinhVien::SinhVien(){
//}
istream& operator >> (istream &in, SinhVien &a){
	getline(in, a.msv);
    getline(in, a.ten);
    getline(in, a.lop);
	getline(in, a.email);
	return in;
}

ostream& operator << (ostream &out, SinhVien a){
	cout << a.msv << ' ' << a.ten << ' ' << a.lop << ' ' << a.email << endl;
	return out;
}
int main(){
	vector<SinhVien> v;
	SinhVien res;
    while(cin >> res){
    	v.push_back(res);
	}
    sort(v.begin(), v.end());
	for(int i=0; i<v.size(); i++){
		cout << v[i];
	}
	return 0;
}
