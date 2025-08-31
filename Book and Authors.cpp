#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

class author{
public:
    string ten, email, gt;
public:
    friend istream &operator >> (istream &in, author &a){
        getline(in, a.ten);
        getline(in, a.email);
        getline(in, a.gt);
        return in;
    }
    friend ostream &operator << (ostream &out, author a){
        out << "Name : " << a.ten << endl << "Email : " << a.email << endl << "Gender : " << a.gt << endl;
        return out;
    }
};
class book{
public:
    string ten;
    author A[100];
    double gia;
    int sl, soA;
public:
    friend istream &operator >> (istream &in, book &a){
        getline(in, a.ten);
        in >> a.gia >> a.sl >> a.soA;
        cin.ignore();
        for(int i=0; i<a.soA; i++) in >> a.A[i];
        return in;
    }
    friend ostream &operator << (ostream &out, book a){
        out << "Book information :"<< endl;
        out << "Name : "<< a.ten << endl;
        out << "Price : "<< a.gia << endl;
        out << "Quantity : "<< a.sl <<endl;
        out << "Author information :" <<endl;
        for(int i=0; i<a.soA; i++){
            out << "#" << i+1 <<endl;
            out << a.A[i];
        }
        return out;
    }
};
bool cmp(book a, book b){
    return a.ten < b.ten;
}
int main(){
    int n;
    cin >> n; cin.ignore();
    string s;
    book a[n];
    for(int i=0; i<n; i++){
        getline(cin, s);
        cin >> a[i]; 
    }
    sort(a, a+n, cmp);
    for(int i=0; i<n; i++){
        cout << s << endl;
        cout << a[i]; 
    }
    return 0;
}
