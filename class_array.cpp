#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

bool snt(int n){
	foru(i, 2, sqrt(n)){
		if(n%i == 0)
			return false;
	}
	return n>1;
}
ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a%b);
}
bool check(ll n, ll m){
	ll sum = n *(n+1) / 2;
	if((sum+m) % 2 != 0)
		return false;
	ll t1 = (sum + m)/2, t2 = (sum - m)/2;
	if(gcd(t1, t2) != 1)
		return false;
	return true;
}
ll powMod(ll a, ll b){
	ll res = 1;
	while(b > 0){
		if(b & 1){
			res *= a;
			res %= mod;
		}
		a *= a;
		a %= mod;
		b /= 2;
	}
	return res;
}
class ARRAY{			//30 bai
public:
	void cpp0201();
	void cpp0202();
	void cpp0203();
	void cpp0204();
	void cpp0205();
	void cpp0206();
	void cpp0207();
	void cpp0208();
	void cpp0209();
	void cpp0210();
	void cpp0212();
	void cpp0214();	
	void cpp0217();
	void cpp0218();
	void cpp0219();
	void cpp0220();
	void cpp0221();
	void cpp0222();
	void cpp0223();
	void cpp0225();
	void cpp0227();
	void cpp0230();
	void cpp0242();
	void cpp0243();
	void cpp0259();
	void cpp0260();
	void cpp0261();
	void cpp0262();
	void cpp0272();
	void cpp0274();	
};
void ARRAY::cpp0201() {
    int n; cin >> n;
	int a[n];
	foru(i, 0, n-1) cin >> a[i];
	sort(a, a+n);
	int kq = 1e9;
	foru(i, 0, n-1){
		kq = min(kq, abs(a[i] - a[i+1]));
	}
	cout << kq << endl;
}

void ARRAY::cpp0202() {
    int n; cin >> n;
	int a[n];
	foru(i, 0, n-1) cin >> a[i];
	sort(a, a+n);
	int kq = 1e9;
	foru(i, 0, n-1){
		kq = min(kq, abs(a[i] - a[i+1]));
	}
	cout << kq << endl;
}

void ARRAY::cpp0203() {
    int n; cin >> n;
	int a[n];
	foru(i, 0, n-1) cin >> a[i];
	sort(a, a+n);
	foru(i, 1, 100000){
		if(!binary_search(a, a+n, i)){
			cout << i << endl;
			break;
		}
	}
}

void ARRAY::cpp0204() {
    int a, b; cin >> a >> b;
	int dem = 0;
	foru(i, a, b){
		if(snt(i))
			dem++;
	}
	cout << dem << endl;
}

void ARRAY::cpp0205() {
    int n; cin >> n;
	int a[n], kq = 0;
	foru(i,0 ,n-1){
		cin >> a[i];
		kq = max(kq, a[i]);
	}
	cout << kq << endl;
}

void ARRAY::cpp0206() {
    int n; cin >> n;
	int a[n], kq = 0;
	foru(i,0 ,n-1){
		cin >> a[i];
		kq = max(kq, a[i]);
	}
	cout << kq << endl;
}

void ARRAY::cpp0207() {
    int n, d; cin >> n >> d;
	int a[n];
	foru(i,0 ,n-1){
		cin >> a[i];
	}
	foru(i, d, n-1){
		cout << a[i] << ' ';
	}
	foru(i, 0, d-1){
		cout << a[i] << ' ';
	}
	cout << endl;
}

void ARRAY::cpp0208() {
    int n, d; cin >> n >> d;
	int a[n];
	foru(i,0 ,n-1){
		cin >> a[i];
	}
	sort(a, a+n);
	cout << a[d-1] << endl;
}

void ARRAY::cpp0209() {
    int n, d; cin >> n >> d;
	int a[n];
	foru(i,0 ,n-1){
		cin >> a[i];
	}
	while(d--){
		int b, c; cin >> b >> c;
		--b; --c;
		int dem = 0;
		foru(i, b, c){
			dem += a[i];
		}
		cout << dem << endl;
	}
}

void ARRAY::cpp0210() {
    int n; cin >> n;
	int a[n];
	foru(i, 0, n-1) cin >> a[i];
	int kq = 0;
	foru(i, 0, n-1){
		foru(j, i+1, n-1){
			if(a[j] > a[i])
				kq = max(kq, a[j] - a[i]);
		}
	}
	if(kq) cout << kq << endl;
	else cout << -1 << endl;
}


void ARRAY::cpp0212() {
    ll n, x; cin >> n >> x;
	ll a[n];
	for(ll i=0; i<n; i++) cin >> a[i];
	ll kq = 0;
	for(ll i=0; i<n; i++){
		kq = (kq * x +a[i]) % mod;
	}
	cout << kq << endl;
}

void ARRAY::cpp0214() {
    int n, k; cin >> n >> k;
	vector<int> v(n);
	foru(i, 0, n-1)
		cin >> v[i];
	multiset<int> ms;
	for(int i=0; i<k; i++){
		ms.insert(v[i]);
	}
	for(int i=k; i<n; i++){
		cout << *ms.rbegin() << ' ';
		ms.erase(ms.find(v[i-k]));
		ms.insert(v[i]);
	}
	cout << *ms.rbegin() << endl;
}

void ARRAY::cpp0225() {
    int n;
	cin >> n;
	int a[n][n], hang[n]={0}, cot[n]={0};
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
			hang[i] += a[i][j];
			cot[j] += a[i][j];
		}
	}
	int tong = max(*max_element(hang, hang+n), *max_element(cot, cot+n));
	int i=0, j=0, kq = 0;
	while(i < n && j < n){
		int tmp = min(tong-hang[i], tong-cot[j]);
		a[i][j] += tmp;
		hang[i] += tmp;
		cot[j] += tmp;
		kq += tmp;
		if(hang[i] == tong) i++;
		if(cot[j] == tong) j++;
	}
	cout << kq << endl;
}

void ARRAY::cpp0217() {
	int n, k;
	cin >> n >> k;
	int a[n][n];
	vector<int> v;
	foru(i, 0, n-1){
		foru(j, 0, n-1){
			cin >> a[i][j];
			v.push_back(a[i][j]);
		}
	}
	sort(v.begin(),v.end());
	cout << v[k-1] << endl;
}
void ARRAY::cpp0218() {
    int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	if(n == 1){
		cout << 0 << endl;
		return;
	}
	int res = 0;
	int tmp = *max_element(a, a+n);
	for(int i=1; i<=tmp; i++){
		bool check = true;
		for(int j=0; j<n-1; j++){
			if(a[j]%i != a[j+1]%i){
				check = false;
				break;
			}
		}
		if(check){
			res++;
		}
	}
	cout << res << endl;
}

void ARRAY::cpp0219() {
    int n, d; cin >> n >> d;
	int a[n];
	foru(i,0 ,n-1){
		cin >> a[i];
	}
	while(d--){
		int b, c; cin >> b >> c;
		--b; --c;
		int dem = 0;
		foru(i, b, c){
			dem += a[i];
		}
		cout << dem << endl;
	}
}

void ARRAY::cpp0220() {
    int n; cin >> n;
	int a[n][n];
	foru(i, 0, n-1){
		foru(j, 0, n-1){
			cin >> a[i][j];
		}
	}
	foru(i, 0, n-1){
		foru(j, 0, n-1){
			if(i==0  || i == n-1 || j==0 || j == n-1)
				cout << a[i][j] << ' ';
			else 
				cout << ' ' << ' ';
		}
		cout << endl;
	}
}

void ARRAY::cpp0221() {
    int n, m, i, j;
	cin >> n >> m;
	int a[n][m];
	foru(i, 0, n-1){
		foru(j, 0, m-1){
			cin >> a[i][j];
		}
	}
	int h1=0, h2 = n - 1, c1=0, c2 = m - 1;
	while(h1 < h2 && c1 < c2){
		int tmp = a[h1+1][c1];
		for(i=c1; i<=c2; i++){
			int res = a[h1][i];
			a[h1][i] = tmp;
			tmp = res;
		}
		h1++;
		for(i=h1; i<=h2; i++){
			int res = a[i][c2];
			a[i][c2] = tmp;
			tmp = res;
		}
		c2--;
		if(h1 <= h2){	
			for(i=c2; i>=c1; i--){
				int res = a[h2][i];
				a[h2][i] = tmp;
				tmp = res;
			}
			h2--;
		}
		if(c1 <= c2){
			for(i=h2; i>=h1; i--){
				int res = a[i][c1];
				a[i][c1] = tmp;
				tmp = res;
			}
			c1++;
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			cout << a[i][j] << ' ';
		}
	}
	cout << endl;
}

void ARRAY::cpp0222() {
    int n;
    cin >> n;
    int a[n][n];
    map <int, int> mp;
    for(int i=0; i<n; i++){
    	for(int j=0; j<n; j++){
    		cin >> a[i][j];
    		if(mp[a[i][j]] == i){
    			mp[a[i][j]] = i+1;
			}
		}
	}
	int dem = 0;
    for(auto it : mp){
    	if(it.second == n)
    		dem++;
	}
    cout << dem << endl;
}

void ARRAY::cpp0223() {
    int n, m, i, j;
	cin >> n >> m;
	int a[101][101];
	foru(i, 0, n-1){
		foru(j, 0, m-1){
			cin >> a[i][j];
		}
	}
	int h1=0, h2 = n - 1, c1=0, c2 = m - 1;
	while(h1 <= h2 && c1 <= c2){
		for(i=c1; i<=c2; i++){
			cout << a[h1][i] << ' ';
		}
		h1++;
		for(i=h1; i<=h2; i++){
			cout << a[i][c2] << ' ';
		}
		if(h1 <= h2){
			c2--;
			for(i=c2; i>=c1; i--){
				cout << a[h2][i] << ' ';
			}
			h2--;
		}
		if(c1 <= c2){
			for(i=h2; i>=h1; i--){
			cout << a[i][c1] << ' ';
			}
			c1++;
		}
	}
	cout << endl;
}

void ARRAY::cpp0227() {
    int n;
	cin >> n;
	int a[n][n];
	foru(i, 0, n-1){
		foru(j, 0, n-1){
			cin >> a[i][j];
		}
	}
	foru(i, 0, n-1){
		if(i%2 == 0){
			foru(j, 0, n-1){
				cout <<  a[i][j] << ' ';
			}
		}
		else{
			ford(j, n-1, 0){
				cout <<  a[i][j] << ' ';
			}
		}
	}
	cout << endl;
}

void ARRAY::cpp0230() {
    int n; 
	cin >> n;
	int a[n][3];
	int kq = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		int dem = 0;
		for(int j=0; j<3; j++){
			if(a[i][j] == 1)
				dem++;
		}
		if(dem >= 2)
			kq++;
	}
	cout << kq;
}

void ARRAY::cpp0260() {
    int n, i, j;
	cin >> n;
	int a[100][100];
	vector<int> v;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
	}
	sort(v.begin(), v.end());
	int dem = 0;
	int h1=0, h2 = n - 1, c1=0, c2 = n - 1;
	while(h1 <= h2){
		for(i=c1; i<=c2; i++){
			a[h1][i] = v[dem++];
		}
		h1++;
		for(i=h1; i<=h2; i++){
			a[i][c2] = v[dem++];
		}
		c2--;
		for(i=c2; i>=c1; i--){
			a[h2][i] = v[dem++];
		}
		h2--;
		for(i=h2; i>=h1; i--){
			a[i][c1] = v[dem++];
		}
		c1++;
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}

void ARRAY::cpp0242() {
    int n;
	cin >> n;
	int a[n], b[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		cin >> b[i];
	}
	int kq = 0;
	for(int i=0; i<n; i++){
		int sum1 = 0, sum2 = 0;
		for(int j=i; j<n; j++){
			sum1 += a[j];
			sum2 += b[j];
			if(sum1 == sum2){
				kq = max(kq, j-i+1);
			}
		}
	}
	cout << kq << endl;
}
void ARRAY::cpp0243() {
    int n, m;
	cin >> n >> m;
	int a[n], b[m];
	vector<int> v1;
	vector<int> v2;
	map<int, int> mp;
	foru(i, 0, n-1){
		cin >> a[i];
		mp[a[i]]++;
	}
	foru(i, 0, m-1){
		cin >> b[i];
		if(mp[b[i]] > 0){
			foru(j, 0, mp[b[i]]-1){
				cout << b[i] << ' ';
			}
			mp[b[i]] = 0;
		}
	}
	foru(i, 0, n-1){
		if(mp[a[i]])
			v2.push_back(a[i]);
	}
	sort(v2.begin(), v2.end());
	for(int i=0; i<v2.size(); i++){
		cout << v2[i] << ' ';
	}
	cout << endl;
}

void ARRAY::cpp0259() {
    int n, m, p, i, j; 
	cin >> n >> m >> p;
	int a[n][m], b[m][p], c[n][p];
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<p; j++){
			cin >> b[i][j];
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<p; j++){
			c[i][j] = 0;
			for(int k=0; k<m; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}
}

void ARRAY::cpp0262() {
    ll n, m;
	cin >> n >> m;
	if(check(n, m))
		cout << "Yes\n";
	else
		cout << "No\n";
}

void ARRAY::cpp0272() {
    int n;
	cin >> n;
	ll a[n];
	ll h = 1;
	for(int i=0; i<n; i++){
		cin >> a[i];
		h *= a[i];
		h %= mod;
	}
	ll g = a[0];
	for(int i=1; i<n; i++){
		g = __gcd(g, a[i]);
	}
	cout << powMod(h, g) << endl;
}

void ARRAY::cpp0274() {
    int n; cin >> n;
	map<int, int> mp;
	foru(i, 0, n-1){
		int x; cin >> x;
		mp[x]++;
	}
	int dem = 0;
	for(auto x : mp){
		if(x.second >= 2)
			dem += x.second;
	}
	cout << dem << endl;
}

void ARRAY::cpp0261() {
    int n, m, i, j;
	cin >> n;
	int a[101][101];
	foru(i, 0, n-1){
		foru(j, 0, n-1){
			cin >> a[i][j];
		}
	}
	cin >> m;
	int b[101][101];
	foru(i, 0, m-1){
		foru(j, 0, m-1){
			cin >> b[i][j];
		}
	}
	foru(i, 0, n-1){
		foru(j, 0, n-1){
			cout << a[i][j] * b[i%m][j%m] << ' ';
		}
		cout << endl;
	}
}


int main(){
	ARRAY A;
//	A.cpp0201();
	return 0;
}
