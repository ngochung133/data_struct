#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int cnt = 0;
        int minn = 1e9;
        sort(a, a + n);
       for(int i = 1; i < n; i++){
        minn = min(minn, a[i] - a[i - 1]);
       }
        cout << cnt;
        cout << endl;
    }
    return 0;
}