#include<iostream>
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
        int ok = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == k){
          
               ok = i + 1;
            }
        }
            if(ok){
                cout << ok;
            }
            else cout << "NO";
        
        cout << endl;
    }
    return 0;
}