#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long a, b, n;
	    cin >> a >> b >> n;
	    if(a >= b && a % b == 0){
	    	cout << -1 << endl;
	    	continue;
		}
	    long long m = ((n + a - 1) / a) * a;
	    while (m % b == 0) {
	        m += a;
	    }
	    cout << m << endl;
	}
    return 0;
}
