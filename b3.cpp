//BAI 3

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; 
    while(t -- ) {
        int n; 
        cin >> n; 
        int a[n], cnt=0; 
        for(int i=1; i <= n; i++) { 
            cin >> a[i]; 
        }
        for(int i=1; i <= n/2; i++) { // => O(n)
            if(a[i] == a[n-i+1]) 	// => O(1)
                cnt++;
        }							// => O(n)
        if(cnt == n/2) 
            cout << "YES\n"; 
        else 
            cout << "NO\n";
    }
    return 0;
}
