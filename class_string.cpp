#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

bool check15(string &s){
	int i=s.size()-1, j = s.size()-1;
	while(i >= 1 && s[i-1] <= s[i])
		i--;
	if(i == 0)
		return false;
	i--;
	while(s[i] <= s[j] || (s[j] == s[j-1] && s[j-1] < s[i]))
		j--;
	swap(s[i], s[j]);
	if(s[0] == '0')
		return false;
	return true;
}
bool check16(string s){
	ll sum = 0;
	for(int i=0; i<s.size(); i++)
		sum += s[i] - '0';
	if(sum > 0 && sum%9 == 0)
		return true;
	return false;
}
void chuanhoa(string &s){
	s[0] = toupper(s[0]);
	for(int i=1; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
}
void inthuong(string &s){
	foru(i, 0, s.size()-1){
		s[i] = tolower(s[i]);
	}
}
void viethoa(string &s){
	foru(i, 0, s.size()-1){
		s[i] = toupper(s[i]);
	}
}
bool thuannghich(string s){
	int l = 0, r = s.size()-1;
	while(l <= r){
		if(s[l]%2 != 0 || s[r]%2 != 0 || s[l] != s[r])
			return false;
		l++; r--;
	}
	return true;
}
bool check18(string s){
	if(s[5]<s[6] && s[6]<s[7] && s[7]<s[9] && s[9]<s[10])
		return true;
	if(s[5]==s[6] && s[6]==s[7] && s[7]==s[9] && s[9]==s[10])
		return true;
	if(s[5]==s[6] && s[6]==s[7] && s[9]==s[10])
		return true;
	for(int i=5; i<=10; i++){
		if(i != 8){
			if(s[i] != '6' && s[i] != '8')
				return false;
		}
	}
	return true;
}
ll powMod(ll a, ll b, ll M){
	ll res = 1;
	while(b > 0){
		if(b & 1){
			res *= a;
			res %= M;
		}
		a *= a;
		a %= M;
		b /= 2;
	}
	return res;
}
ll reduceN(string n, ll m){
	ll res = 0;
	for(int i=0; i<n.size(); i++){
		res = (res * 10 + n[i] - '0') % m;
	}
	return res;
}
class STRING{       //31 bai
public:
	void cpp0307();
	void cpp0308();
	void cpp0309();
	void cpp0310();
	void cpp0311();
	void cpp0312();
	void cpp0313();
	void cpp0314();
	void cpp0315();
	void cpp0316();
	void cpp0317();
	void cpp0318();
	void cpp0319();
	void cpp0320();
	void cpp0321();
	void cpp0322();
	void cpp0323();
	void cpp0324();
	void cpp0325();
	void cpp0327();
	void cpp0332();
	void cpp0333();
	void cpp0334();
	void cpp0335();
	void cpp0338();
	void cpp0339();
	void cpp0342();
	void cpp0351();
	void cpp0353();
	void cpp0354();
	void cpp0371();
};
void STRING::cpp0307(){
	string s1, s2;
	map<string, int> mp;
	getline(cin, s1);
	stringstream ss(s1);
	string tmp;
	while(ss >> tmp){
		mp[tmp] = 1;
	}
	getline(cin, s2);
	stringstream ss2(s2);
	while(ss2 >> tmp){
		mp[tmp] = 0;
	}
	for(auto x : mp){
		if(x.second == 1)
			cout << x.first << ' ';
	}
	cout << endl;
}

void STRING::cpp0308(){
	string s;
	getline(cin, s);
	map<char, int> mp;
	for(char x : s){
		mp[x]++;
	}
	for(auto x : s){
		if(mp[x] == 1)
			cout << x;
	}
	cout << endl;
}

void STRING::cpp0309(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	int dem = 0;
	while(ss >> tmp){
		dem++;
	}
	cout << dem << endl;
}

void STRING::cpp0310(){
	string a, b;
	cin >> a >> b;
	foru(i, 0, a.size()){
		if(a[i] == '6') a[i] = '5';
	}
	foru(i, 0, b.size()){
		if(b[i] == '6') b[i] = '5';
	}
	cout << stoll(a) + stoll(b) << ' ';
	foru(i, 0, a.size()){
		if(a[i] == '5') a[i] = '6';
	}
	foru(i, 0, b.size()){
		if(b[i] == '5') b[i] = '6';
	}
	cout << stoll(a) + stoll(b) << endl;
}

void STRING::cpp0311(){
	string s;
	cin >> s;
	map<char, int> mp;
	int Max = 0;
	for(char x : s){
		mp[x]++;
		Max = max(Max, mp[x]);
	}
	if(Max <= (s.size() - Max) + 1)
		cout << 1;
	else
		cout << 0;
	cout << endl;
}

void STRING::cpp0312(){
	string s;
	getline(cin, s);
	int k; cin >> k;
	cin.ignore(1);
	map<char, int> mp;
	for(char x : s){
		mp[x] = 1;
	}
	int dem = 0;
	for(auto x : mp){
		if(x.second == 1)
			dem++;
	}
	if(26 - dem <= k)
		cout << 1;
	else
		cout << 0;
	cout << endl;
}

void STRING::cpp0313(){
	string s, t;
	getline(cin, s);
	getline(cin, t);
	while(s.find(t) != -1){
		s.erase(s.find(t), t.size() + 1);
	}
	cout << s;
}

void STRING::cpp0314(){
	int n; cin >> n;
	cin.ignore();
	set<string> se;
	foru(i, 1, n){
		string x;
		getline(cin, x);
		se.insert(x);
	}
	cout << se.size();
}

void STRING::cpp0315(){
	string s;
	cin >> s;
	if(check15(s)){
		cout << s;
	}
	else
		cout << -1;
	cout << endl;
}

void STRING::cpp0316(){
	string s;
	cin >> s;
	if(check16(s))
		cout << 1 << endl;
	else
		cout << 0 << endl;
}

void STRING::cpp0317(){
	string s;
	getline(cin, s);
	if(thuannghich(s))
		cout << "YES\n";
	else
		cout << "NO\n";
}

void STRING::cpp0318(){
	string s;
	cin >> s;
	if(check18(s))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

void STRING::cpp0319(){
	int m, s;
	cin >> m >> s;
	int max[m] = {0}, min[m] = {0};
	if( s > 9*m || (s == 0 && m > 1)){
		cout << -1 << ' ' << -1;
		return;
	}
	int tmp = s;
	for(int i=0; i<m; i++){
		if(s >= 9){
			max[i] = 9;
			s -= 9;
		}
		else if(s > 0){
			max[i] = s;
			break;
		}
	}
	tmp--;
	for(int i=m-1; i>=0; i--){
		if(tmp >= 9){
			min[i] = 9;
			tmp -= 9;
		}
		else if(tmp > 0){
			min[i] = tmp;
			break;
		}
	}
	min[0] += 1;
	for(int i=0; i<m; i++) cout << min[i];
	cout << ' ';
	for(int i=0; i<m; i++) cout << max[i];
}

void STRING::cpp0320(){
	string s;
	cin >> s;
	set<char> se;
	bool check = true;
	if(s[0] == '0')
		check = false;		
	for(char x : s){
		if(isalpha(x)){
			check = false;
			break;
		}
		else
			se.insert(x);
	}
	if(!check){
		cout << "INVALID" << endl;
		return;
	}
	if(se.size() == 10)
		cout << "YES";
	else
		cout << "NO";
	cout << endl;
}

void STRING::cpp0321(){
	string a, b, c = "";
	cin >> a >> b;
	if(a.size() < b.size())
		swap(a, b);
	else if(a.size() == b.size()){
		if(a < b) swap(a, b);
	}
	for(int i=b.size(); i<a.size(); i++){
		b = '0' + b;
	}
	int tmp = 0;
	for(int i=a.size()-1; i>=0; i--){
		int res = (a[i] - '0') - (b[i] - '0') - tmp;
		if(res < 0){
			tmp = 1;
			c = to_string(res + 10) + c;
		}
		else{
			tmp = 0;
			c = to_string(res) + c;
		}
		
	}
	cout << c << endl;
}

void STRING::cpp0322(){
	string a, b, c = "";
	cin >> a >> b;
	if(a.size() < b.size())
		swap(a, b);
	for(int i=b.size(); i<a.size(); i++){
		b = '0' + b;
	}
	int tmp = 0;
	for(int i=a.size()-1; i>=0; i--){
		int res = (a[i] - '0') + (b[i] - '0') + tmp;
		if(res > 9){
			tmp = 1;
			c = to_string(res - 10) + c;
		}
		else{
			tmp = 0;
			c = to_string(res) + c;
		}
		
	}
	if(tmp > 0){
		c = to_string(tmp) + c;
	}
	cout << c << endl;
}

void STRING::cpp0323(){
	string n;
	ll m;
	cin >> n >> m;
	ll tmp = reduceN(n, m);
	cout << tmp << endl;
}

void STRING::cpp0324(){
	string a;
	ll b, M;
	cin >> a >> b >> M;
	ll tmp = reduceN(a, M);
	ll res = powMod(tmp, b, M);
	cout << res << endl;
}

void STRING::cpp0334(){
	string s;
	cin >> s;
	int sum = 0, res = 0;
	for(int i=0; i<s.size(); i++){
		if(isdigit(s[i])){
			res = res*10 + (s[i] - '0');
		}
		if(isalpha(s[i]) || i == s.size()-1){
			sum += res;
			res = 0;
		}
	}
	cout << sum << endl;
}

void STRING::cpp0335(){
	string s;
	cin >> s;
	int kq = -1, res = 0;
	for(int i=0; i<s.size(); i++){
		if(isdigit(s[i])){
			res = res*10 + (s[i] - '0');
		}
		else{
			kq = max(kq, res);
			res = 0;
		}
	}
	kq = max(kq, res);
	cout << kq << endl;
}

void STRING::cpp0325(){
	string s;
	getline(cin, s);
	int sum = 0;
	foru(i, 0, s.size()-1){
		if(i%2 == 0)
			sum += s[i] - '0';
		else
			sum -= s[i] - '0';
			
	}
	if(sum % 11 == 0)
		cout << 1 << endl;
	else
		cout << 0 << endl;
}

void STRING::cpp0332(){
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		inthuong(tmp);
		v.push_back(tmp);
	}
	cout << v[v.size()-1];
	foru(i, 0, v.size()-2){
		cout << v[i][0];
	}
	cout << "@ptit.edu.vn";
}

void STRING::cpp0333(){
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		chuanhoa(tmp);
		v.push_back(tmp);
	}
	foru(i, 0, v.size()-2){
		cout << v[i];
		if(i != v.size()-2)
			cout << ' ';
	}
	cout << ", ";
	viethoa(v[v.size()-1]);
	cout << v[v.size()-1];
}

void STRING::cpp0339(){
	string s;
	getline(cin, s);
	int dem = 0;
	foru(i, 0, s.size()-1){
		foru(j, i, s.size()-1){
			if(s[i] == s[j])
				dem++;
		}
	}
	cout << dem << endl;
}

void STRING::cpp0342(){
	string s;
	cin >> s;
	vector<char> v;
	int sum = 0;
	for(int i=0; i<s.size(); i++){
		if(isalpha(s[i])){
			v.push_back(s[i]);
		}
		else
			sum += s[i] - '0';
	}
	sort(v.begin(), v.end());
	for(char x : v){
		cout << x;
	}
	cout << sum << endl;
}

void STRING::cpp0353(){
	string s;
		getline(cin, s);
	string tmp = "";
	inthuong(s);
	for(char x : s){
		if(x == 'a' || x == 'b' || x == 'c')
			tmp += "2";
		if(x == 'd' || x == 'e' || x == 'f')
			tmp += "3";
		if(x == 'g' || x == 'h' || x == 'i')
			tmp += "4";
		if(x == 'j' || x == 'k' || x == 'l')
			tmp += "5";
		if(x == 'm' || x == 'n' || x == 'o')
			tmp += "6";
		if(x == 'p' || x == 'q' || x == 'r' || x == 's')
			tmp += "7";
		if(x == 't' || x == 'u' || x == 'v')
			tmp += "8";
		if(x == 'w' || x == 'x' || x == 'y' || x == 'z')
			tmp += "9";
	}
	if(thuannghich(tmp))
		cout << "YES\n";
	else
		cout << "NO\n";
}

void STRING::cpp0354(){
	string s;
	getline(cin, s);
	map<char, int> mp;
	for(char x : s){
		mp[x]++;
	}
	for(auto x : s){
		if(mp[x]){
			cout << x << mp[x];
			mp[x] = 0;
		}
	}
	cout << endl;
}

void STRING::cpp0351(){
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

void STRING::cpp0371(){
	string s;
	cin >> s;
	inthuong(s);
	for(auto x : s){
		if(x != 'u' && x != 'e' && x != 'o' && x != 'a' && x != 'i' && x != 'y')
			cout << '.' << x;
	}
}


int main(){
	STRING A;
	A.cpp0308();
	return 0;
}
