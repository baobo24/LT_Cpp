#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

ll gt(int n){
	if(n == 0) return 1;
	return n * gt(n-1);
}
bool checklocphat(int n){
	while(n > 0){
		int a = n%10;
		if(a != 0 && a != 6 && a != 8)
			return false;
		n /= 10;
	}
	return true;
}
bool thuannghich(ll n){
	ll tmp = n;
	ll lat = 0;
	while(n>0){
		lat = lat*10 + n%10;
		n /= 10;
	}
	if(lat == tmp) return true;
	return false;
}
bool canbang(int n){
	int chan=0, le=0;
	while(n>0){
		int a = n%10;
		if(a%2 == 0)
			chan++;
		else le++;
		n /= 10;
	}
	if(chan == le) return true;
	return false;
}
bool checklienke(ll n){
	int a = n%10; 
	n /= 10;
	while(n > 0){
		if(abs(a - n%10) != 1)
			return false;
		a = n%10;
		n /= 10;	
	}
	return true;
}
bool snt(int n){
	foru(i, 2, sqrt(n)){
		if(n%i == 0)
			return false;
	}
	return n>1;
}
bool sotang(int n){
	int a = n%10; 
	n /= 10;
	while(n > 0){
		if(a <= n%10)
			return false;
		a = n%10;
		n /= 10;	
	}
	return true;
}
bool sogiam(int n){
	int a = n%10; 
	n /= 10;
	while(n > 0){
		if(a >= n%10)
			return false;
		a = n%10;
		n /= 10;	
	}
	return true;
}
int tong(int n){
	if(n < 10) return n;
	int sum = 0;
	while(n > 0){
		sum += n%10;
		n /= 10;
	}
	return tong(sum);
}
bool checksphenic(ll n){
	int dem = 0;
	foru(i, 2, sqrt(n)){
		if(n%i == 0){
			int dem1 = 0;
			while(n%i == 0){
				dem1++;
				if(dem1 > 1) return false;
				n /= i;
			}
			dem++;
			if(dem > 3) return false;
		}
	}
	if(n > 1)
		dem++;
	if(dem == 3)
		return true;
	return false;
}
ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a%b);
}
ll lcm(ll a, ll b){
	return (a * b) / gcd(a, b);
}
int prime[100005];
void sang(){
	prime[0] = prime[1] = 0;
	foru(i, 2, 100005){
		prime[i] = 1;
	}
	foru(i, 2, sqrt(100005)){
		if(prime[i] == 1){
			for(int j=i*i; j<=100005; j+=i){
				prime[j] = 0;
			}
		}
	}
}
vector<ll> v;
void shh(){
	for(ll i = 1; i<=50; i++){
		if(snt(i)){
			ll a = pow(2, i) - 1;
			ll b = pow(2, i-1);
			if(snt(a))
				v.push_back(a * b);
		}
	}
}
class INT{            //30 bai
private:
	ll n;

public:
	void tongn();  			
	void tongpt();	  	 	
	void tonggt();	  	 	
	void solocphat(); 		
	void sothuannghich();	
	void canbangchanle();	
	void masoquocgia();	   	
	void solienke();	   	
	void khoangcach(); 		
	void somayman();   
	void tongchuso();	   
	void sotanggiam(); 		
	void sphenic();	   
	void chiahetAvaB();   
	void chiahet3songuyen();   
	void solaplai(); 
	void gcd_lcm();  
	void uocchiahetcho2();	   
	void CPP0115();	   
	void CPP0122();	   
	void cpp0123();	   
	void CPP0124();	   
	void cpp0125();	    
	void cpp0126();	   
	void cpp0127();	    
	void cpp0129();	    
	void cpp0130();	    
	void cpp0132();	    
	void cpp0140();	    
	void cpp0142();	    
};
void INT :: tongn(){
	cin >> n;
	cout << (n * (n+1)) / 2 << endl;
}
void INT :: tongpt(){
	cin >> n;
	double sum = 0;
	for (int i = 1; i <= n; i++){
		sum += 1.0/i;
	}
	cout << fixed << setprecision(4) << sum;
}
void INT :: tonggt(){
	cin >> n;
	ll res = 0;
	for (int i = 1; i <= n; i++){
		res += gt(i);
	}
	cout << res;
}
void INT :: solocphat(){
	cin >> n;
	if(checklocphat(n))
		cout << "YES\n";
	else
		cout <<"NO\n";
}
void INT :: sothuannghich(){
	cin >> n;
	if(thuannghich(n))
		cout << "YES\n";
	else cout << "NO\n";
}
void INT :: canbangchanle(){
	cin >> n;
	int dem=0;
	int a = pow(10, n-1), b = pow(10, n) - 1;
	for (int i = a; i <= b; i++){
		if(canbang(i)){
			cout << i << " ";
			dem++;
			if(dem%10 == 0) cout << endl;
		}
	}
}
void INT :: masoquocgia(){
	string c; cin >> c;
	int a = c.length()-3;
	for (int i = 0; i <= a; i++){
		if(c[i] == '0' && c[i+1] == '8' && c[i+2] == '4'){
			c[i] = c[i+1] = c[i+2] = ' ';
			break;
		}
	}
	for (int i = 0; i <= c.length()-1; i++){
		if(c[i] != ' ')
			cout << c[i];
	}	
}
void INT :: solienke(){
	cin >> n;
	if(checklienke(n))
		cout << "YES\n";
	else cout << "NO\n";
}
void INT :: khoangcach(){
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	double x = abs(a-c), y = abs(b-d);
	double kq = sqrt(pow(x, 2) + pow(y, 2));
	cout << fixed << setprecision(4) << kq << endl;
}
void INT :: somayman(){
	cin >> n;
    if ((n - 86) % 100 == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
void INT :: tongchuso(){
	cin >> n;
    cout << tong(n) << endl;
}
void INT :: sotanggiam(){
	cin >> n;
    int dem = 0;
	int a = pow(10,n-1), b = pow(10,n) - 1;
	for (int i = a; i <= b; i++){
		if((sotang(i) || sogiam(i)) && snt(i))
			dem++;
	}
	cout << dem << endl;
}
void INT :: sphenic(){
	cin >> n;
    if(checksphenic(n))
		cout << 1;
	else cout << 0;
	cout << endl;
}
void INT :: uocchiahetcho2(){
	cin >> n;
    int dem = 0;
	foru(i, 1, sqrt(n)){
		if(n%i == 0){
			if(i * i != n){
				if(i%2 == 0) dem++;
				if((n/i)%2 == 0) dem++;
			}
			else{
				if(i%2 == 0) dem++;
			}
		}
	}
	cout << dem << endl;
}
void INT :: gcd_lcm(){
	ll a, b; cin >> a >> b;
	cout << lcm(a, b) << " " << gcd(a, b) << endl;
}
void INT :: CPP0122(){
	cin >> n;
	ll kq = 1;
	foru(i, 1, n){
		kq = lcm(kq, i);
	}
	cout << kq << endl;
}
void INT :: CPP0124(){
	cin >> n;
	for(int i=2; i<=sqrt(n); i++){
		int dem = 0;
		while( n%i==0 ){
			dem ++;
			n /= i;
		}
		if(dem>0){
			cout << i << " " << dem << " " << endl;
		}			
	}
	if(n!=1){
		cout << n << " " << 1;
	}
	cout << endl;
}
void INT :: chiahetAvaB(){
	int c, d, a, b;
	cin >> c >> d >> a >> b;
	int dem = 0;
	foru(i, c, d){
		if(i%a == 0 || i%b == 0)
			dem++;
	}
	cout << dem << endl;
}
void INT :: chiahet3songuyen(){
	ll x, y, z, t;
	cin >> x >> y >> z >> t;
	ll bc = lcm(lcm(x, y), z);
	ll a = pow(10, t-1), b = pow(10, t) - 1;
	ll start = (a + bc - 1) / bc * bc;
    if(start <= b){
        cout << start << endl;
    }
	else cout << -1 << endl;
}
void INT :: solaplai(){
	ll a, x, y;
	cin >> a >> x >> y;
	ll tmp = gcd(x, y);
	foru(i, 1, tmp){
		cout << a;
	}
	cout << endl;;
}
void INT :: CPP0115(){
	cin >> n;
	for(int i=2; i<=sqrt(n); i++){
		int dem = 0;
		while( n%i==0 ){
			dem ++;
			n /= i;
		}
		if(dem>0){
			cout << i << " " << dem << " ";
		}			
	}
	if(n!=1){
		cout << n << " " << 1;
	}
	cout << endl;
}
void INT :: cpp0123(){
	cin >> n;
	if(snt(n))
		cout << "YES";
	else cout << "NO";
}
void INT :: cpp0125(){
	sang();
	int a, b; cin >> a >> b;
	if(a>b) swap(a, b);
	foru(i,a+1 ,b-1){
		if(prime[i] == 1)
			cout << i << ' ';
	}
}
void INT :: cpp0126(){
	sang();
	int t; cin >> t;
	while(t--){
		int a, b; cin >> a >> b;
		if(a>b) swap(a, b);
		foru(i,a ,b){
			if(prime[i] == 1)
				cout << i << ' ';
		}
		cout << endl;
	}
}
void INT :: cpp0127(){
	cin >> n;
	int kt = 1;
	foru(i, 2, n/2){
		if(snt(i) && snt(n-i)){
			cout << i << ' ' << n-i << endl;
			kt = 0;
			break;
		}
	}
	if(kt) cout << -1 << endl;
}
void INT :: cpp0129(){
	int p;
	cin >> n >> p;
	int res = 0;
	for(int i=p; i<=n; i *= p){
		res += n/i;
	}
	cout << res << endl;
}
void INT :: cpp0130(){
	cin >> n;
	for(int i=2; i<=sqrt(n); i++){
		while(n%i == 0){
			cout << i << " ";
			n /= i;		
		}
	}
	if(n>1)
		cout << n;
	cout << endl;
}
void INT :: cpp0132(){
	cin >> n;
	ll res = 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			res = i;
			while( n%i==0 ){
				n /= i;
			}			
		}
	}
	if(n!=1)
		cout << n << endl;
	else cout << res << endl;
}
void INT :: cpp0140(){
	cin >> n;
	if(binary_search(v.begin(), v.end(), n))
		cout << 1 << endl;
	else
		cout << 0 << endl;
}
void INT :: cpp0142(){
	int x; cin >> x;
	int t = 0;
	foru(i, 1, x){
		if(gcd(i, x) == 1)
			t++;
	}
	if(snt(t))
		cout << 1 << endl;
	else cout << 0 << endl;
}
int main(){
	INT A;
//	A.tongchuso();
	return 0;
}
