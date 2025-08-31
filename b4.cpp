//BAI 4

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; 
    while(t -- ) {
        int n; 
        cin >> n; 
        for(int i=2; i <= sqrt(n); i++) { 			// => O(logn)
            if(n%i == 0) {
                int cnt=0; 
                while(n%i == 0) { 					// => O(logn)
                    cnt++; 
                    n/=i;
                }
                cout << i << " ( " << cnt << " ) ";
            }
        }											// => O(logn.logn)
        if(n != 0) 
            cout << n << "(1)";
    }
    return 0;
}
