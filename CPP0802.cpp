#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int calc(string s)
{
    if(s.size() > 9) return 0;
    for(int i=0; i<s.size(); i++){
    	if(!isdigit(s[i])) return 0;
	}
	ll res = stoll(s);
	if(res <= pow(2, 31)-1) return res;
	return 0;
}
int main()
{
    ifstream in("DATA.in");
    string tmp;
    ll sum = 0;
    while (in >> tmp)
    {
        sum += calc(tmp);
    }
    cout << sum;
}