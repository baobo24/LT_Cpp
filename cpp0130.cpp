#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;
using ll = long long;
void phantich(ll n){
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
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		phantich(n);
	}
	return 0;
}
