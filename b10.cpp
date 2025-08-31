//BAI 10

#include <bits/stdc++.h>
using namespace std;

int uocchan(int n){
	int res = 0;
	for(int i=1; i<=sqrt(n); i++){        // O(logn)
		if(n%i == 0){
			if(i*i != n){
				if(i%2 == 0) res++;		// O(1)
				if((n/i)%2 == 0) res++;
			}
			else if(i%2 == 0) res++;
		}	
	}									// => O(logn)
	return res;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << uocchan(n) << endl;
    }
    return 0;
}
