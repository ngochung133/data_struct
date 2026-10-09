#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        int maxx = -1e9, minn = 1e9;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            maxx = max(maxx, a[i]);
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
            minn = min(minn, b[i]);
        }
        cout << (long long) maxx * minn << endl;
    }
    return 0;
}