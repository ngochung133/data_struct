#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);       // 1 6 3 4 5 2 7 a[i]
        for(int i = 0; i < n; i++){   // 1 2 3 4 5 6 7  b[i]  1 o vi tri i hoac n-i-1(0, 6)
            cin >> a[i];              // 7 2 3 4 5 6 1  
            b[i] = a[i];
        }
        int ok = 1;
        sort(b.begin(), b.end());
        for(int i = 0; i < n; i++){
            if(a[i] != b[i] && a[i] != b[n - i - 1]){ 
                ok = 0;
                break;
            }
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}