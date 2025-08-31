//BAI 1

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { 			// => O(logn)
    if(b == 0) 
        return a; 
    return gcd(b, a%b);
}
int lcm(int a, int b) { 
    return a*b/gcd(a, b);  			// => O(logn)
}
int main() {
    int t; 
    cin >> t; 
    while(t -- ) { 
        int a, b; 
        cin >> a >> b; 
        int m = gcd(a, b);  
        int n = lcm(a, b); 
        cout << m << " " << n << endl; // => O(logn)
    }
    return 0;
}
