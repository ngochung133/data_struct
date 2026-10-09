#include <vector>
#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<long long> a(n), b(m), c(k), v;

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        for (int i = 0; i < k; i++) cin >> c[i];

        int i = 0, j = 0, l = 0;
        while (i < n && j < m && l < k) {
            if (a[i] == b[j] && b[j] == c[l]) {
                v.push_back(a[i]);
                i++; j++; l++;
            } 
            else {
                long long minn = min({a[i], b[j], c[l]});
                if (a[i] == minn) i++;
                else if (b[j] == minn) j++;
                else l++;
            }
        }

        if (!v.empty()) {
            for (auto x : v) cout << x << " ";
        } 
        else {
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}