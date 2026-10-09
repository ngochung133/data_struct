#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int k  = 0;
        int ok = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        for(int i = 0; i < n; i++){         
             if(k * 2 + a[i] == sum){       // (tong trai phan tu a[i]) k = s - a[i] - k (tong phai phan tu a[i]);
                ok = i + 1;
                break;
             }  
             k += a[i];
        }
        if(ok) cout << ok;
        else cout << "-1";
        cout << endl;
    }
    return 0;
}