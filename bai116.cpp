#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> LMin(n), RMax(n);

    
        LMin[0] = a[0];
        for (int i = 1; i < n; i++)
            LMin[i] = min(a[i], LMin[i - 1]);

      
        RMax[n - 1] = a[n - 1];
        for (int j = n - 2; j >= 0; j--)
            RMax[j] = max(a[j], RMax[j + 1]);

      
        int i = 0, j = 0, maxDiff = -1;
        while (i < n && j < n) {
            if (LMin[i] < RMax[j]) {
                maxDiff = max(maxDiff, j - i);
                j++;
            } else {
                i++;
            }
        }

        cout << maxDiff << endl;
    }
    return 0;
}