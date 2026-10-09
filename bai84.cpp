#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int l = 0;
        int r = n - 1;
        sort(a, a + n);
        while(l < r){
            cout << a[r] << " " << a[l] << " ";
            r--;
            l++;
        }
        if(l == r) cout << a[l] << " ";
        cout << endl;
    }
    return 0;
}