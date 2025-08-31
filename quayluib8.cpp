#include<bits/stdc++.h>
using namespace std;

int n, k, a[20][20], x[20], sum = 0;
bool check[20] = {false};

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (!check[j]) {
            x[i] = a[i][j];
            sum += a[i][j];
            check[j] = true;
            if (i == n) {
                if (sum == k) {
                    for (int l = 1; l <= n; l++) {
                        cout << x[l] << " ";
                    }
                    cout << endl;
                }
            } else {
                Try(i + 1);
            }
            check[j] = false;
            sum -= a[i][j];
        }
    }
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    Try(1);
    return 0;
}
