#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

struct dat{
	string f, l,sdt,date;
	
};
bool cmp(dat &a, dat&b){
	if(a.l != b.l)
		return a.l< b.l;
	if(a.f != b.f)
		return a.f<b.f;
	return 0;  
}

int main(){
	ifstream fin("SOTAY.txt");
	ofstream fout("DIENTHOAI.txt");
	string s;
	unordered_map<int,string> m;
	dat a[10005];
	int id=0, i=0;
	string date;
	while(getline(fin, s)){
		string tmp = s.substr(0,4);
		if(tmp=="Ngay"){
			++i;
			date = s.substr(5,s.size()-5);
			m[i]=date;
		}
		else{
			string tmp;
			getline(fin,tmp);
			vector<string> v;
			string s1, fn="";
			stringstream ss(s);
			while(ss>>s1) v.push_back(s1);
			a[id].l =v[v.size()-1];
			for(int j=0; j<v.size()-1;++j) fn+=v[j]+" ";
			a[id].f=fn;
			a[id].sdt=tmp;
			a[id].date=m[i];
			++id;
		}
	}
	sort(a, a+id,cmp);
	for(int j=0; j<id;++j){
		fout<<a[j].f<<a[j].l<<": "<<a[j].sdt<< ' '<<a[j].date<<endl;
	}
	return 0;
}
