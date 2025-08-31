//BAI 6

#include <bits/stdc++.h>
using namespace std;

bool sotanggiam(string s) {
    bool sotang = true, sogiam = true;
    for (int i = 0; i < s.size() - 1; ++i) {  // O(n)
        if (s[i] > s[i + 1]) {
            sotang = false;					// O(1)
        }
        if (s[i] < s[i + 1]) {
            sogiam = false;					// O(1)
        }
    }										// => O(n)			
    return sotang || sogiam;
}

int main() {
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        if (sotanggiam(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
