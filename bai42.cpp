#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;    

int main(){
    int t;
    cin >> t;
    while(t--){
        int module = pow(10, 9) + 7;
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i] * i;
        }
        cout << sum % module << endl;
    }
    return 0;
}