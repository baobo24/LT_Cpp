#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void chuanhoa(string &s){
	s[0] = toupper(s[0]);
	for(int i=1; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		vector<string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			chuanhoa(tmp);
			v.push_back(tmp);
		}
		if(n == 1){
			string chuan = "";
			chuan += v[v.size()-1];
			for(int i=0; i<v.size()-1; i++){
				chuan += " " + v[i];
			}
			cout << chuan << endl;
		}
		else{
			string chuan = "";
			for(int i=1; i<v.size(); i++){
				chuan += v[i] + " ";
			}
			chuan += v[0];
			cout << chuan << endl;
		}
	}
	return 0;
}
