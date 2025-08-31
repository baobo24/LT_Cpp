//BAI 7

#include <bits/stdc++.h>
using namespace std;

string chuanhoa(string s) {
    for (auto &c : s) c = tolower(c);
    stringstream ss(s);
    string res = "", tmp;
    while (ss >> tmp) {                // O(n)
        tmp[0] = toupper(tmp[0]);      // O(1)
        res += tmp + " ";
    }                                  // => O(n)
    res.pop_back();
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        cout << chuanhoa(s) << endl;
    }
    return 0;
}
