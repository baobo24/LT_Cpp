//BAI 9

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> fi(26, -1), se(26, -1);
    for (int i = 0; i < s.size(); ++i) {
        if(fi[s[i] - 'A'] == -1){
            fi[s[i] - 'A'] = i;
        }
		else{
            se[s[i] - 'A'] = i;
        }
    }
    int res = 0;
    for (int i = 0; i < 26; ++i) {										// O(n)
        for (int j = i + 1; j < 26; ++j) {								// O(n)
            if ((fi[i] < fi[j] && fi[j] < se[i] && se[i] < se[j]) ||
                (fi[j] < fi[i] && fi[i] < se[j] && se[j] < se[i])) {	
                ++res;													// O(1)
            }
        }
    }																	// => O(n^2)
    cout << res << endl;
    return 0;
}
